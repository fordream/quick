
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "CCCommon.h"
#include "CCStdC.h"

#include "ccUTF8.h"

NS_CC_BEGIN

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)

#include <shlwapi.h>

#define MAX_LEN         (cocos2d::kMaxLogLen + 1)

void SendLogToWindow(const char *log)
{
    // Send data as a message
    //     COPYDATASTRUCT myCDS;
    //     myCDS.dwData = CCLOG_STRING;
    //     myCDS.cbData = (DWORD)strlen(log) + 1;
    //     myCDS.lpData = (PVOID)log;
    //     HWND hwnd = CCEGLView::sharedOpenGLView()->getHWnd();
    //     SendMessage(hwnd,
    //         WM_COPYDATA,
    //         (WPARAM)(HWND)hwnd,
    //         (LPARAM)(LPVOID)&myCDS);
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

void CCLuaLog(const char *pszMsg)
{
    CCLog("%s", pszMsg);
}

void CCMessageBox(const char * pszMsg, const char * pszTitle)
{
//    MessageBoxA(NULL, pszMsg, pszTitle, MB_OK);
}
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include "jni/Java_org_cocos2dx_lib_Cocos2dxHelper.h"
#include <android/log.h>
#include <stdio.h>
#include <jni.h>


#define MAX_LEN         (cocos2d::kMaxLogLen + 1)

void CCLog(const char * pszFormat, ...)
{
    char buf[MAX_LEN];

    va_list args;
    va_start(args, pszFormat);
    vsnprintf(buf, MAX_LEN, pszFormat, args);
    va_end(args);

    __android_log_print(ANDROID_LOG_DEBUG, "cocos2d-x debug info", "%s", buf);
}

void CCMessageBox(const char * pszMsg, const char * pszTitle)
{
    //showDialogJNI(pszMsg, pszTitle);
}

void CCLuaLog(const char * pszFormat)
{
    __android_log_print(ANDROID_LOG_DEBUG, "cocos2d-x debug info", "%s", pszFormat);
}

#endif

NS_CC_END
