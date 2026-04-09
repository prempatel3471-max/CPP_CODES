#include <iostream>
using namespace std;

// User-defined function
int convertToSeconds(int hours) {
    return hours * 3600;
}

int main() {
    int hours;

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Seconds = " << convertToSeconds(hours);

    return 0;
}