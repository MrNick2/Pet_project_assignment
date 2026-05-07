#pragma once

#include <unistd.h>

/**
 * @file Real_Delay.h
 * @brief The header for the cpp "Real_Delay".
 *
 * It contains the declaration of the public method "waitOneSecond".
 */

class Real_Delay
{
public:
    virtual void waitOneSecond();
};