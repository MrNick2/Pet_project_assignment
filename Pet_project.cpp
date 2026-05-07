/// For input-output
#include <iostream>
/// This class includes all main things.
#include "Countdown.h"

/// For avoiding writing "std::" everywhere.
using namespace std;

/// Main function:
int main()
{
    /// This variable holds the countdowns starting number
    int seconds;

    /// The name of the program, with a little bit of style.
    cout << "--------------" << endl;
    cout << "Timer program!" << endl;
    cout << "--------------" << endl;

    /// Input.
    cout << "Give me the seconds: ";
    cin >> seconds;

    /// Declaration of the instance of the display class.
    Console_Display display;
    /// Declaration of the instance of the delay class.
    Real_Delay delay;

    /// Declaration and construction of the countdown class.
    Countdown countdown(seconds, &display, &delay);
    /// This is where the "magic" happens: the countdown runs.
    countdown.run();

    /// The end of the program.
    return 0;
}