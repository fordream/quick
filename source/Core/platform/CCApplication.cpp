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

NS_CC_END

