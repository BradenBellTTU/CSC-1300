/*
	Title:  	Lab4b.cpp
	Author:		Braden Bell
	Date:		02.20.22
	Purpose:	learning switch statements
*/

#include <iostream>
using namespace std;

int main() {

	//Variables
	char grade;

	//Get user input on their grade
	cout << "\n\nWhat grade will you earn on this lab assignment?\n";
	cout << "GRADE: ";
	cin >> grade;

	//Switch statement to output appropriate response
	switch(grade) {
		case 'A':
			cout << "\nAn A - you rock!!\n";
			break;

		case 'B':
			cout << "\nYou got a B - good job.\n";
			break;

		case 'C':
			cout << "\nEarning a C is satisfactory.\n";
			break;
		
		case 'D':
			cout << "\nWhile D is passing, there is a problem.\n";
			cout << "You really didn't learn much.\n";
			break;
		
		case 'F':
			cout << "\nOh BARF! You failed - better luck next time.\n";
			break;

		default:
			cout << "\nYou did not enter an A, B, C, D, or F.\n";
	}
	return 0;
}


/*
+----------------+
| REFERENCE CODE |
+----------------+

int main()
{
	char grade;

	cout << "What grade will you earn on this lab assignment?" << endl;
	cout << "GRADE: ";
	cin >> grade;

	if (grade == 'A')
		cout << cout << "An A - you rock!!\n";
	else if (grade == 'B')
		cout << "You got a B - good job.\n" ;
	else if ( grade =='C')
		cout << "Earning a C is satisfactory.\n";
	else if(grade == 'D')
	{
		cout << "While D is passing, there is a problem.\n";
		cout << "You really didnt learn much.\n";
	}
	else if (grade =='F')
		cout << "Oh BARF!  You failed - better luck next time.\n";
	else
		cout << "You did not enter an A, B, C, D, or F.\n";

    return 0;
}
*/