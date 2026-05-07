#pragma once

#include "Console_Display.h"
#include "Real_Delay.h"

/**
 * This class is the class that uses the previous classes and does the work.
 */
class Countdown
{
private:
    /**
     * Here are the variables of the class.
     * @param start Is the starting value that the user gives and the countdown starts from.
     * @param display Pointer to the used instance of the class "Console_Display".
     * @param delay Pointer to the used instance of the class "Real_Delay".
     */
    int start;
    Console_Display *display;
    Real_Delay *delay;

public:
    /**
     * This is the constructor of the class.
     * @param s For the "start" variable.
     * @param d For the "display" pointer variable.
     * @param del For the "delay" pointer variable.
     */
    Countdown(int s, Console_Display *d, Real_Delay *del);

    /**
     * This is the "run" class, which does the main part of the program.
     * @brief Basically, it runs a "for" loop and calls the "show" function from "display" (for writing out the current second) and "waitOneSecond" from delay (for sleeping one second).
     */
    void run();
};