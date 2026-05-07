#include "Countdown.h"
#include "Real_Delay.h"
#include "Console_Display.h"

using namespace std;

class Fake_Console_Display : public Console_Display
{
public:
    void show(int value) override
    {
        
    }
};


class Fake_Delay : public Real_Delay
{
    private:
    int seconds_fake = 0;
public:
    void waitOneSecond() override
    {
        seconds_fake += 1;
    }

    int Return_Second()
    {
        return seconds_fake;
    }
};

int main()
{
    int seconds = 5;

    Fake_Console_Display display;
    Fake_Delay delay;

    Countdown countdown(seconds, &display, &delay);
    countdown.run();

    if(delay.Return_Second() != seconds)
    {
        cerr << "Test failed\n";
        return 1;
    }

    cout << "Test passed\n";
    return 0;
}