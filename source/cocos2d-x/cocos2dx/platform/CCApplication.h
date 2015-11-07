#ifndef __CC_APP_H__
#define __CC_APP_H__

#include "CCStdC.h"
#include "platform/CCCommon.h"
#include "platform/CCApplicationProtocol.h"
#include <string>
#include "CCTimer.h"

NS_CC_BEGIN

class CCInput;

class CC_DLL CCApplication : public CCApplicationProtocol
{
public:
    CCApplication();
    virtual ~CCApplication();

    /**
    @brief    Run the message loop.
    */
    int run(int argc, char** argv);
    void setFps(int fps);

    void runFrame();
    bool isRunning();
    virtual void quit();
    void timeLimit();

    /**
    @brief    Get current applicaiton instance.
    @return Current application instance pointer.
    */

    /* override functions */
    virtual void setAnimationInterval(double interval);
    virtual ccLanguageType getCurrentLanguage();
    
    /**
     @brief Get target platform
     */
    virtual TargetPlatform getTargetPlatform();

	static CCApplication* sharedApplication();

protected:
    int _fps;
    bool _running;
    CCTimerHiRes _frameTimer;

    CCInput* _input;
};

NS_CC_END

#define DEFINE_MAIN(appType) \
extern "C" int SDL_main(int argc, char** argv) \
{ \
	cocos2d::CCApplication* app = new appType; \
    return app->run(argc, argv); \
}

#endif    // __CC_APPLICATION_WIN32_H__
