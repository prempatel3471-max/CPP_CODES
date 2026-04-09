#include <iostream>
using namespace std;

// User-defined function
void convertTime(int totalSeconds) {
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << "HH:MM:SS => "
         << hours << ":"
         << minutes << ":"
         << seconds << endl;
}

int main() {
    int totalSeconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    convertTime(totalSeconds);

    return 0;
}