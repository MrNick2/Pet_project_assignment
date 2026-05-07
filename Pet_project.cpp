/**
 * @file Pet_project.cpp
 * @brief The main ".cpp" of the program.
 *
 * This is the entry point of the program.
 * It contains the main function of the program, which also contains the declaration of the objects.
 */

#include <iostream>
#include "Countdown.h"

using namespace std;

/**
 * @brief This is the entry point.
 *
 * Reads the countdown duration from the user and starts the timer.
 *
 * @return Exit status code.
 */
int main()
{
    int seconds; 

    cout << "--------------" << endl;
    cout << "Timer program!" << endl;
    cout << "--------------" << endl;

    cout << "Give me the seconds: ";
    cin >> seconds;

    Console_Display display;
    Real_Delay delay;

    Countdown countdown(seconds, &display, &delay);
    countdown.run();

    return 0;
}