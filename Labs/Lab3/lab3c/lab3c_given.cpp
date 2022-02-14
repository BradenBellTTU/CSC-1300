// This program calculates the circumference of a circle.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	const float PI = 3.14159;
	string fullName;
	double diameter, circumfrence;

	//Get diameter
	cout << "\n\nWhat is the diameter of the circle?\n";
	cin >> diameter;
	
	//Get user's name
	cout << "\n\nWhat is your first & last name?\n";
	cin.ignore();
	getline(cin, fullName);

	// Calculate the circumference.
	circumfrence = PI * diameter;
	
	// Display the circumference.
	cout << "\n\nHello, " << fullName;
	cout << "! The circumference of your circle is: " << circumfrence << endl;
	
	return 0; 
}