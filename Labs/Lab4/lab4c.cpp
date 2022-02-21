/*
	Title:  	Lab4b.cpp
	Author:		Braden Bell
	Date:		02.20.22
	Purpose:    while loop practice
*/


#include <iostream>
using namespace std;

int main() {
    
    //Variables
    char letterVar = 'n';
    int numVar = 0;

    //The While Loop™
    while (letterVar != 'y' || numVar != 22) {

        //Ask user math problem and get input
        cout << "\nWhat do you get if you add 4 + 18? ";
        cin >> numVar;

        //Ask user if they want to quit
        cout << "Enter the letter 'y' of you want to quit.\n";
        cin >> letterVar;

        //Tell them what letter they entered
        cout << "The letter you entered is " << letterVar << "\n";

        //Goat foot message
        if (numVar != 22)
            cout << "Oh goat foot! You forgot how to add!\n";
    }
    return 0;
}