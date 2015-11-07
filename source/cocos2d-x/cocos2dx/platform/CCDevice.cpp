#include "platform/CCDevice.h"
#include "CCStdC.h"

NS_CC_BEGIN

int CCDevice::getDPI()
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
    static int dpi = -1;
    if (dpi == -1)
    {
        HDC hScreenDC = GetDC( NULL );
        int PixelsX = GetDeviceCaps( hScreenDC, HORZRES );
        int MMX = GetDeviceCaps( hScreenDC, HORZSIZE );
        ReleaseDC( NULL, hScreenDC );   
        dpi = 254.0f*PixelsX/MMX/10;
    }
    return dpi;
#endif
}

NS_CC_END