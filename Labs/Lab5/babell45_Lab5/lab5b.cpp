/*
	Title:  	Lab5b.cpp
	Author:		Braden Bell
	Date:		02.25.22
	Purpose:	Money tree
*/

#include <iostream>
using namespace std;

int main() {

    //Variables
    int rows, i, j, k;

    //Get number of rows from user (with input sanitation)
    cout << "Enter number of rows: ";
    cin >> rows;
    while (cin.fail() || !(rows >= 2)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Oops! you must enter a number greater than 1!" << endl;
        cout << "Enter number of rows: ";
        cin >> rows;
    }

    //Output rows
    for (i = 0; i < rows; i++){
        for(j = rows; j>i; j--){
            cout << ' ';
        }
        for(k = 0; k < (2 * i + 1); k++) {
            cout << '$';
        }
        cout << "\n";
    }

    return 0;
}