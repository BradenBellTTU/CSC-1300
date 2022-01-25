/*
Braden Bell
01-25-2021
CSC 1300-106: Lab 1
Celsius to Fahrenheit Calculator
Required Files: None
*/

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "What is the current temperature in Celsius? ";
    cin >> celsius;
    fahrenheit = ( (9.0/5.0) * celsius + 32);
    cout << "RESULT: " << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}