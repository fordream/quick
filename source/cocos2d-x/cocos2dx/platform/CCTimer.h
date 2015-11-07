#ifndef _CCTIMER_H_
#define _CCTIMER_H_

namespace cocos2d
{

//high resolution
class CCTimerHiRes
{
public:
    CCTimerHiRes();

    void reset();
    long long elapsed();

protected:
    long long _startTime;
};

class CCTimeN
{
public:
    static void sleep(unsigned mSec);
};

}

#endif//_CCTIMER_H_