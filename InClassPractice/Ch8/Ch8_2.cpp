#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Structures
struct CarInfo {
    string make;
    string model;
    int year;
};

struct Car {
    struct CarInfo info;
    string color;
    double cost;
};

int main() {
    //Vars
    const int SIZE = 3;
    Car myCarArray[SIZE];

    //Main for loop
    for (int i = 0; i < SIZE; i++) {
        cout << '\n' << setw(24) << "Enter data for car " << (i + 1);
        cout << '\n' << setw(24) << "What car is it? ";
        getline(cin, myCarArray[i].info.make);
        cout << '\n' << setw(24) << "What model? ";
        getline(cin, myCarArray[i].info.model);
        cout << '\n' << setw(24) << "Year of the car? ";
        cin >> myCarArray[i].info.year;
        cin.ignore();
        cout << '\n' << setw(24) << "Color of the car? ";
        getline(cin, myCarArray[i].color);
        cout << '\n' << setw(24) << "How much does it cost? ";
        cin >> myCarArray[i].cost;
        cin.ignore();
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Your car:\n";
        cout << "Make: " << myCarArray[i].info.make << '\n';
        cout << "Model: " << myCarArray[i].info.model << '\n';
        cout << "Year: " << myCarArray[i].info.year << '\n';
        cout << "Color: " << myCarArray[i].color << '\n';
        cout << "Cost: " << myCarArray[i].cost << '\n\n';
    }

    return 0;
}