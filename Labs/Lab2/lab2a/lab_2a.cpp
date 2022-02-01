/*
	Title:  	lab_2a.cpp
	Author:		Braden Bell
	Date:		2-1-2022	
	Purpose:	This program is written for waiters & waitresses at
				TGI Fridays so that they can calculate total cost
				of hot wings for their customers.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define your variables here
	const double HOT_WING_COST = 0.99;
	const double SALES_TAX = 0.085;
	double billTotal;
	int numWings;

	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) */
	cout <<	setprecision(2) << fixed << showpoint; 
	cout << "\n\nPlease input the number of hot wings purchased:  ";
	
	//	Fill in the	input statement to bring in	the	quantity of hot wings.
	cin >> numWings;

	//	Fill in the assignment statement to determine the total bill.
	billTotal = (numWings * HOT_WING_COST);
	billTotal = (billTotal * SALES_TAX) + billTotal;

	//	Fill in	the	output statement to print total	bill as shown in sample output
	cout << "Your total bill is: $" << billTotal << endl;

	return 0;
}
