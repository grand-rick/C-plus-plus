#include <iostream>

using namespace std;

class Time
{
    private:
        int hours, minutes, seconds;
    
    public:
        void input();
        void increment();
        void output();
};

int main()
{
    Time one;

    one.input();
    one.output();
    one.increment();
    one.output();


    return 0;
}

void Time::input()
{
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
}

void Time::increment()
{
    seconds++;
    if (seconds == 60)
    {
        minutes++;
        seconds = 0;
    }
    if (minutes == 60)
    {
        hours++;
        minutes = 0;
    }
}

void Time::output()
{
    cout << "The time is " << hours << " : " << minutes << " : " << seconds << endl;
}