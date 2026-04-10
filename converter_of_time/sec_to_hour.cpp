#include <iostream>
using namespace std;

// Class definition
class TimeConverter
{
private:
    int totalSeconds;
    int hours, minutes, seconds;

public:
    void getInput()
    {
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
    }

    void convertTime()
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }

    void display()
    {
        cout << "HH:MM:SS => "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }
};

int main()
{
    TimeConverter t;

    t.getInput();
    t.convertTime();
    t.display();

    return 0;
}