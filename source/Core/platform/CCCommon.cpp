
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "CCCommon.h"
#include "CCStdC.h"

#include "ccUTF8.h"

NS_CC_BEGIN

#define MAX_LEN         (cocos2d::kMaxLogLen + 1)
#include "SDL_messagebox.h"


#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)

#include <shlwapi.h>

void SendLogToWindow(const char *log)
{

}


static bool _init = false;

void CCLog(const char * pszFormat, ...)
{
    char szBuf[MAX_LEN];
    if (!_init){
        AllocConsole();
        freopen("CONOUT$", "wt", stdout);
        freopen("CONOUT$", "wt", stderr);
        _init = true;
    }

    va_list ap;
    va_start(ap, pszFormat);
    vsnprintf_s(szBuf, MAX_LEN, MAX_LEN, pszFormat, ap);
    va_end(ap);
    puts(szBuf);
}

#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include "jni/Java_org_cocos2dx_lib_Cocos2dxHelper.h"
#include <android/log.h>
#include <stdio.h>
#include <jni.h>

void CCLog(const char * pszFormat, ...)
{
    char buf[MAX_LEN];

    va_list args;
    va_start(args, pszFormat);
    vsnprintf(buf, MAX_LEN, pszFormat, args);
    va_end(args);

    __android_log_print(ANDROID_LOG_DEBUG, "cocos2d-x debug info", "%s", buf);
}

#endif

void CCMessageBox(const char * pszMsg, const char * pszTitle)
{
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, pszTitle, pszMsg, 0);
}

void CCLuaLog(const char *pszMsg)
{
    CCLog("%s", pszMsg);
}

NS_CC_END
