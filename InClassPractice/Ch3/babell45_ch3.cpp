/*
    Title: ch3.cpp
    Author: Braden Bell
    Date: Feb 7, 2022
    Purpose: In class practice for chapter 3
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	//Variables
	int mainMenu, subMenu;
	float radius, length, width, area;
	const float PI = 3.14159;
	string string1, string2;

	//Main menu
	cout << "\nPlease choose from the following options:\n" << endl;
	cout << "1. Fun with strings!\n" << endl;
	cout << "2. Calculate area.\n" << endl;
	cout << "CHOOSE 1 or 2: ";
	cin >> mainMenu;

	//Sub menus
	switch (mainMenu) {
		case 1:
			//Display fun with strings sub-menu
			cout << "\nYou chose fun with strings!" << endl;
			cout << "Choose from the following options:\n" << endl;
			cout << "1. Longest string\n" << endl;
			cout << "2. Add strings\n" << endl;
			cout << "CHOOSE 1 or 2: ";
			cin >> subMenu;

			//Longest string
			if (subMenu == 1) {

				//Get strings from user
				cout << "\nEnter a string: ";
				cin.ignore();
				getline(cin, string1);
				cout << "\nEnter another string: ";
				getline(cin, string2);
				
				//Compare string length using .length() function and display outcome to user
				if (string1.length() > string2.length()) {
					cout << "\"" << string1 << "\"" << " is longer than " << "\"" << string2 << "\"" << endl;
				} 
				else if (string1.length() < string2.length()) {
					cout << "\"" << string2 << "\"" << " is longer than " << "\"" << string1 << "\"" << endl;
				}
				else if (string1.length() == string2.length()) {
					cout << "\"" << string2 << "\"" << " is the same length as " << "\"" << string1 << "\"" << endl;
				}
			}

			//Add strings
			else if (subMenu == 2) {

				//Get strings from user
				cout << "\nEnter a string: ";
				cin.ignore();
				getline(cin, string1);
				cout << "\nEnter another string: ";
				getline(cin, string2);

				//Add strings and display them to user
				cout << "\n" << string1 + " " + string2 << " is your two strings added together." << endl;
			}
			break;


		//Calculate area
		case 2:

			//Display area sub-menu
			cout << "\nYou chose to calculate area!" << endl;
			cout << "Choose from the following options:\n" << endl;
			cout << "1. Area of a circle\n" << endl;
			cout << "2. Area of a rectangle\n" << endl;
			cout << "CHOOSE 1 or 2: ";
			cin >> subMenu;

			//Area of a circle
			if (subMenu == 1) {
				
				//Get circle radius from user
				cout << "\nEnter the radius of the circle: ";
				cin >> radius;

				//Calculate area
				area = PI * pow(radius, 2);

				//Display area with 2 decimal points
				cout << setprecision(2) << fixed << showpoint << "\nThe area of your circle is " << area << endl;
			}

			//Area of a rectangle
			else if (subMenu == 2) {
				
				//Get length and width from user
				cout << "\nEnter the length and width of the rectangle seperated by a space: ";
				cin >> length >> width;

				//Calculate area
				area = length * width;
				
				//Display area with 2 decimal points
				cout << setprecision(2) << fixed << showpoint << "\nThe area of the rectangle is " << area << endl;
			}
			break;
	}
}
