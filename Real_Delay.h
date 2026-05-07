#pragma once

#include <unistd.h>


/**
 * This class is for delaying the show, with the help of the function "sleep".
 */
class Real_Delay
{
public:
    virtual void waitOneSecond();
};