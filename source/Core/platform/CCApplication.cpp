#include "CCApplication.h"
#include "CCDirector.h"
#include "SDL_events.h"
#include "CCInput.h"
#include "CCEGLView.h"
#include "CCFileUtils.h"
//#include <xmemory>

NS_CC_BEGIN

static CCApplication* _instance = 0;

CCApplication::CCApplication()
: _running(true)
{
	_instance = this;
}

CCApplication::~CCApplication()
{
}

CCApplication* CCApplication::sharedApplication()
{
    return _instance;
}

ccLanguageType CCApplication::getCurrentLanguage()
{
    ccLanguageType ret = kLanguageEnglish;
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
    LCID localeID = GetUserDefaultLCID();
    unsigned short primaryLanguageID = localeID & 0xFF;
    
    switch (primaryLanguageID)
    {
        case LANG_CHINESE:
            ret = kLanguageChinese;
            break;
        case LANG_ENGLISH:
            ret = kLanguageEnglish;
            break;
        case LANG_FRENCH:
            ret = kLanguageFrench;
            break;
        case LANG_ITALIAN:
            ret = kLanguageItalian;
            break;
        case LANG_GERMAN:
            ret = kLanguageGerman;
            break;
        case LANG_SPANISH:
            ret = kLanguageSpanish;
            break;
        case LANG_DUTCH:
            ret = kLanguageDutch;
            break;
        case LANG_RUSSIAN:
            ret = kLanguageRussian;
            break;
        case LANG_KOREAN:
            ret = kLanguageKorean;
            break;
        case LANG_JAPANESE:
            ret = kLanguageJapanese;
            break;
        case LANG_HUNGARIAN:
            ret = kLanguageHungarian;
            break;
        case LANG_PORTUGUESE:
            ret = kLanguagePortuguese;
            break;
        case LANG_ARABIC:
            ret = kLanguageArabic;
            break;
    }
#endif
    return ret;
}

TargetPlatform CCApplication::getTargetPlatform()
{
    return kTargetWindows;
}

int CCApplication::run(int argc, char** argv)
{
    std::string args;
    for (int i = 1; i < argc; ++i)
    {
        args.append((const char*)argv[i]);
        args.append(" ");
    }

    parseArguments(args);

	CCEGLView* e = CCEGLView::sharedOpenGLView();

    e->createWithSize(640, 960);

	CCDirector* d = CCDirector::sharedDirector();
	CCFileUtils* f = CCFileUtils::sharedFileUtils();
	
	d->setOpenGLView(e);

	if (!applicationDidFinishLaunching())
		return 1;

	while (isRunning())
		runFrame();


	return 0;
}

void CCApplication::runFrame()
{
    CCDirector::sharedDirector()->mainLoop();

    _input->update();

    timeLimit();
}

bool CCApplication::isRunning()
{
    return _running;
}

void CCApplication::timeLimit()
{
    long long targetMax = 1000000LL / _fps;
    long long elapsed = 0;

    for (;;)
    {
        elapsed = _frameTimer.elapsed();
        if (elapsed >= targetMax)
            break;

        // Sleep if 1 ms or more off the frame limiting goal
        if (targetMax - elapsed >= 1000LL)
        {
            unsigned sleepTime = (unsigned)((targetMax - elapsed) / 1000LL);
            CCTimeN::sleep(sleepTime);
        }
    }
    _frameTimer.reset();
}

void CCApplication::setFps(int fps)
{
    _fps = fps;
}

void CCApplication::setAnimationInterval(double interval)
{
    setFps(1.0 / interval);
}

void CCApplication::quit()
{
    _running = false;
}


struct NamedScreenSize
{
    const char* name;
    int width, height;
};

static NamedScreenSize s_allSize[] = {
    { "iPhone 3Gs (320x480)", 320, 480 },
    { "iPhone 4 (640x960)", 640, 960 },
    { "iPhone 5 (640x1136)", 640, 1136 },
    { "iPad (768x1024)", 768, 1024 },
    { "iPad Retina (1536x2048)", 1536, 2048 },
    { "Android (480x800)", 480, 800 },
    { "Android (480x854)", 480, 854 },
    { "Android (540x960)", 540, 960 },
    { "Android (600x1024)", 600, 1024 },
    { "Android (720x1280)", 720, 1280 },
    { "Android (800x1280)", 800, 1280 },
    { "Android (1080x1920)", 1080, 1920 },
};

static int getSizeIndex(int width, int height)
{
    if (width > height)
    {
        int w = width;
        width = height;
        height = w;
    }

    int count = sizeof(s_allSize) / sizeof(s_allSize[0]);

    for (int i = 0; i < count; ++i)
    {
        const NamedScreenSize &size = s_allSize[i];
        if (size.width == width && size.height == height)
        {
            return i;
        }
    }

    return -1;
}

const std::string& CCApplication::getConfig(const std::string& name)
{
    ConfigMap::iterator iter = _configs.find(name);
    if (iter != _configs.end())
        return iter->second;

    return "";
}

void CCApplication::parseArguments(const std::string& args)
{
    unsigned cmdStart = 0, cmdEnd = 0;

    bool inQuote = false;
    bool inCmd = false;
    const char* start = args.c_str();

    for (unsigned i = 0; i < args.size(); ++i)
    {
        if (args[i] == '\"')
            inQuote = !inQuote;
        if (args[i] == ' ' && !inQuote)
        {
            if (inCmd)
            {
                inCmd = false;
                cmdEnd = i;

                addConfig(start + cmdStart, start + cmdEnd);
            }
        }
        else
        {
            if (!inCmd)
            {
                inCmd = true;
                cmdStart = i;
            }
        }
    }
}

void CCApplication::addConfig(const char* spos, const char* epos)
{
    bool inCmd = false;
    for (const char* c = spos; c != epos; c++)
    {
        if ((*c) == '\"')
        {
            inCmd = !inCmd;
        }
        else if ((*c) == '=' && !inCmd)
        {
            c++;
            // -workdir="123";
            if ((*c)== '\"')
                _configs[std::string(spos + 1, c - 2 - spos)] = std::string(c + 1, epos - c - 2);
            else
                _configs[std::string(spos + 1, c - 2 - spos)] = std::string(c, epos - c);
            break;
        }
    }
}

NS_CC_END

