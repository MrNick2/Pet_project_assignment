#include "Countdown.h"
#include "Real_Delay.h"
#include "Console_Display.h"

/**
 * @file Test_Pet_project.cpp
 * @brief For testing the application.
 *
 * It is the main part of the program, but with different classes and only for testing.
 */

using namespace std;

/**
 * @brief A child class of the "Console_Display" class for testing purposes.
 */
class Fake_Console_Display : public Console_Display
{
public:
    /**
     * @brief This was the solution I came up with, in order to not change the Countdown class.
     * @param value For getting the parameter during calling. Of course, it does not do anything with it.
     */
    void show(int value) override
    {
    }
};

/**
 * @brief A child class of the "Real_Delay" class for testing purposes.
 */
class Fake_Delay : public Real_Delay
{
private:
    int seconds_fake = 0; ///< This is to test the number of seconds.

public:
    /**
     * @brief This time, the function just simulates the seconds.
     */
    void waitOneSecond() override
    {
        seconds_fake += 1;
    }

    /**
     * @brief This is a get method for the variable "seconds_fake".
     * @return Just returns said variable.
     */
    int Return_Second()
    {
        return seconds_fake;
    }
};

/**
 * @brief This is the entry point.
 *
 * It does not get an input from the user, but there is a hardcoded value for the variable.
 * It runs the classes, but instead of the default classes, it uses it's child classes, that were made only for testing.
 *
 * @return Exit status code.
 */

int main()
{
    int seconds = 5;

    Fake_Console_Display display;
    Fake_Delay delay;

    Countdown countdown(seconds, &display, &delay);
    countdown.run();

    if (delay.Return_Second() != seconds)
    {
        cerr << "Test failed\n";
        return 1;
    }

    cout << "Test passed\n";
    return 0;
}