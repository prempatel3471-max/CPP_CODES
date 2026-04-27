#include <iostream>
using namespace std;

class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int trainCount;

public:
    // Default Constructor
    Train() {
        trainNumber = 0;
        trainName = "";
        source = "";
        destination = "";
        trainTime = "";
        trainCount++;
    }

    // Parameterized Constructor
    Train(int tNo, string tName, string src, string dest, string time) {
        trainNumber = tNo;
        trainName = tName;
        source = src;
        destination = dest;
        trainTime = time;
        trainCount++;
    }

    // Destructor
    ~Train() {
        trainCount--;
    }

    // Setters
    void setTrainNumber(int tNo) { trainNumber = tNo; }
    void setTrainName(string tName) { trainName = tName; }
    void setSource(string src) { source = src; }
    void setDestination(string dest) { destination = dest; }
    void setTrainTime(string time) { trainTime = time; }

    // Getters
    int getTrainNumber() { return trainNumber; }
    string getTrainName() { return trainName; }
    string getSource() { return source; }
    string getDestination() { return destination; }
    string getTrainTime() { return trainTime; }

    // Input Method
    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);
    }

    // Display Method
    void displayTrainDetails() {
        cout << "\nTrain Number: " << trainNumber;
        cout << "\nTrain Name: " << trainName;
        cout << "\nSource: " << source;
        cout << "\nDestination: " << destination;
        cout << "\nTrain Time: " << trainTime << endl;
    }

    // Static Function
    static int getTrainCount() {
        return trainCount;
    }
};

// Initialize static variable
int Train::trainCount = 0;

int main() {
    Train t1;   // object using default constructor
    t1.inputTrainDetails();

    Train t2(12345, "Rajdhani Express", "Delhi", "Mumbai", "10:00 AM");

    cout << "\n--- Train 1 Details ---";
    t1.displayTrainDetails();

    cout << "\n--- Train 2 Details ---";
    t2.displayTrainDetails();

    cout << "\nTotal Train Objects: " << Train::getTrainCount();

    return 0;
}