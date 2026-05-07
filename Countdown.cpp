#include "Countdown.h"

/**
 * @file Countdown.cpp
 * @brief The cpp file for the class "Countdown".
 *
 * It uses the two other classes in one class.
 */

/**
 * @brief This is the constructor of the class.
 */
Countdown::Countdown(int s, Console_Display *d, Real_Delay *del)
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