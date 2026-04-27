#include <iostream>
using namespace std;

// Train Class
class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

public:
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

    void displayTrainDetails() {
        cout << "\nTrain Number: " << trainNumber;
        cout << "\nTrain Name: " << trainName;
        cout << "\nSource: " << source;
        cout << "\nDestination: " << destination;
        cout << "\nTrain Time: " << trainTime << endl;
    }

    int getTrainNumber() {
        return trainNumber;
    }
};

// RailwaySystem Class
class RailwaySystem {
private:
    Train trains[100];   // Array of Train objects
    int totalTrains;

public:
    // Constructor
    RailwaySystem() {
        totalTrains = 0;
    }

    // Add Train
    void addTrain() {
        if (totalTrains < 100) {
            cout << "\nEnter details of Train " << totalTrains + 1 << ":\n";
            trains[totalTrains].inputTrainDetails();
            totalTrains++;
        } else {
            cout << "Train limit reached!\n";
        }
    }

    // Display All Trains
    void displayAllTrains() {
        if (totalTrains == 0) {
            cout << "No trains available.\n";
            return;
        }

        for (int i = 0; i < totalTrains; i++) {
            cout << "\n--- Train " << i + 1 << " ---";
            trains[i].displayTrainDetails();
        }
    }

    // Search Train by Number
    void searchTrainByNumber(int number) {
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getTrainNumber() == number) {
                cout << "\nTrain Found:";
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "Train not found.\n";
    }
};

// Main Function
int main() {
    RailwaySystem rs;
    int choice, number;

    do {
        cout << "\n--- Railway System Menu ---";
        cout << "\n1. Add Train";
        cout << "\n2. Display All Trains";
        cout << "\n3. Search Train by Number";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            rs.addTrain();
            break;
        case 2:
            rs.displayAllTrains();
            break;
        case 3:
            cout << "Enter Train Number to search: ";
            cin >> number;
            rs.searchTrainByNumber(number);
            break;
        case 4:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}