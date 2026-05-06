// For input and output
#include <iostream>

// So I don't have to write std everywhere
using namespace std;

class Countdown {     // The class
  public:           // Access specifier
    Countdown(int countdown_start) {     // Constructor
      cout << "Hello World!";
      countdown_number = countdown_number;
    }

    private:
    int countdown_number;
    void The_Countdown_Thing()
    {
        
    }
};

int main()
{
    int countdown_start;

    cout<<"--------------"<<endl;
    cout<<"Timer program!"<<endl;
    cout<<"--------------"<<endl;

    cout<<"Give me the seconds that you want the countdown to start from: ";
    cin>>countdown_start;

    Countdown My_Countdown(countdown_start);

    system("clear");

    for (size_t i = countdown_start; i > 0; i--)
    {
        cout<<""
    }
    

    return 0;
}