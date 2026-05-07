#include "Real_Delay.h"

/**
 * @file Real_Delay.h
 * @brief The cpp file for the class "Real_Delay".
 *
 * It contains the declaration of the public method "waitOneSecond".
 */

/**
 * @brief This function is for waiting one second. It uses the header file "unistd"s function "sleep".
 */
void Real_Delay::waitOneSecond()
{
    sleep(1);
}
