#include <iostream>
#include <unistd.h>

using namespace std;

// Concrete display (SRP)
class Console_Display{
public:
    void show(int value) {
        cout << value << endl;
    }
};

// Concrete delay (SRP)
class Real_Delay{
public:
    void waitOneSecond() {
        sleep(1);
    }
};

// Core countdown logic (SRP, DIP)
class Countdown {
private:
    int start;
    Console_Display* display;
    Real_Delay* delay;

public:
    Countdown(int s, Console_Display* d, Real_Delay* del)
        : start(s), display(d), delay(del) {}

    void run() {
        for (int i = start; i > 0; --i) {
            display->show(i);
            delay->waitOneSecond();
        }
    }
};

int main() {
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