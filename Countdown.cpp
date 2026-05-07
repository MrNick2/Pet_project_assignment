#include "Countdown.h"

Countdown::Countdown(int s, Console_Display* d, Real_Delay* del)
    : start(s), display(d), delay(del)
{
}

void Countdown::run()
{
    for (int i = start; i > 0; --i)
    {
        display->show(i);
        delay->waitOneSecond();
    }
}