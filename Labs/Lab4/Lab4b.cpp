/*
	Title:  	Lab4b.cpp
	Author:		Braden Bell
	Date:		02.20.22
	Purpose:	learning switch statements
*/

#include <iostream>
using namespace std;

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