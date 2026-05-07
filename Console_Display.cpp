#include "Console_Display.h"

/// For avoiding writing "std::" everywhere.
using namespace std;

/**
 * @brief This function prints out the number that it gets. It gets the value that it prints out in the form of an int.
 * @param value This is the value that it prints out.
 */
void Console_Display::show(int value)
{
    cout << value << endl;
}