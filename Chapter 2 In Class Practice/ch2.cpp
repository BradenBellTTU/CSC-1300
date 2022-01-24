/*
    Title: ch2.cpp
    Author: Braden Bell
    Date: Jan 25, 2021
    Purpose: In class practice for chapter 2
*/

#include <iostream>
using namespace std;

int main() {
    int result;

    cout << "Below are the results of various arithematic operstions." << endl;
    result = 5 + 2 * 4;
    cout << "1) The result of 5 + 2 * 4 is " << result << endl;
    result = (5+2) * 4;
    cout << "2) The result of (5 + 2) * 4 is " << result << endl;
    result = 10 / 5 - 3;
    cout << "3) The result of 10 / 5 - 3 is " << result << endl;
    result = 10 / (5 - 3);
    cout << "4) The result of 10 / (5 - 3) is " << result << endl;
    result = 6 - 3 * 2 + 7 - 1 + 17 % 2;
    cout << "5) The result of 6 - 3 * 2 + 7 - 2 + 17 % 2  is " << result << endl;
    result = (6 - 3) * 2 + (7 - 1) + 17 % 2;
    cout << "6) The result of (6 - 3) * 2 + (7 - 1) + 17 % 2 is " << result << endl;
    return 0;
}