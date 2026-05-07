#include "Real_Delay.h"

/**
 * @brief This function is for waiting one second. It uses the header file "unistd"s function "sleep".
 */
void Real_Delay::waitOneSecond()
{
    sleep(1);
}
