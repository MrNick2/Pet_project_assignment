#pragma once

#include "Console_Display.h"
#include "Real_Delay.h"

/**
 * @file Countdown.h
 * @brief The header for the cpp "Countdown".
 *
 * It uses the two other classes in one class.
 */

class Countdown
{
private:
    int start;                ///< Is the starting value that the user gives and the countdown starts from.
    Console_Display *display; ///< Pointer to the used instance of the class "Console_Display".
    Real_Delay *delay;        ///< Pointer to the used instance of the class "Real_Delay".

public:
    /**
     * This is the constructor of the class.
     * @param s For the "start" variable.
     * @param d For the "display" pointer variable.
     * @param del For the "delay" pointer variable.
     */
    Countdown(int s, Console_Display *d, Real_Delay *del);

    /**
     * @brief Basically, it runs a "for" loop and calls the "show" function from "display" (for writing out the current second) and "waitOneSecond" from delay (for sleeping one second).
     */
    void run();
};