#pragma once

#include <iostream>

/**
 * @file Console_Display.h
 * @brief The header for the cpp "Console_Display".
 *
 * It displays the seconds with its method "show".
 */

/**
 * @brief This class displays the text. It has one method.
 */
class Console_Display
{
public:
    virtual void show(int value);
};