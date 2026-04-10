#include <iostream>
using namespace std;

// Class definition
class TimeConverter {
private:
    int hours;
    int seconds;

public:
    void getInput() {
        cout << "Enter hours: ";
        cin >> hours;
    }

    
    void convert() {
        seconds = hours * 3600;
    }

    
    void display() {
        cout << "Seconds = " << seconds;
    }
};

int main() {
    TimeConverter t;  

    t.getInput();     
    t.convert();      
    t.display();     

    return 0;
}