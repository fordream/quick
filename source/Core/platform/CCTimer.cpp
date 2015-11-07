#include "CCTimer.h"
#include "SDL_timer.h"

namespace cocos2d
{

static long long highResolutionTick()
{
    return SDL_GetPerformanceCounter();
}

static long long highResolutionFrequency()
{
    return SDL_GetPerformanceFrequency();
}

cocos2d::CCTimerHiRes::CCTimerHiRes()
{
    reset();
}

void cocos2d::CCTimerHiRes::reset()
{
    _startTime = highResolutionTick();
}

long long cocos2d::CCTimerHiRes::elapsed()
{
    long long currentTime = highResolutionTick();
    long long elapsedTime = currentTime - _startTime;

    if (elapsedTime < 0)
        elapsedTime = 0;

    return (elapsedTime * 1000000LL) / highResolutionFrequency();
}



void CCTimeN::sleep(unsigned mSec)
{
    SDL_Delay(mSec);
}

}