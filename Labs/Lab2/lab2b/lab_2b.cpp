/*
	Title:  	lab_2b.cpp
	Author:		Braden Bell
	Date:		2-1-2022	
	Purpose:	This program helps a user at a convience store to buy 2 different items and calculate the cost
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //Variables
    const double SALES_TAX = 0.0975;
    string item1Name, item2Name;
    int item1Quantity, item2Quantity;
    double item1Cost, item2Cost, totalCost;

    //Get information for first item
    cout << "\n\nPlease input the name of the first item: ";
    getline(cin, item1Name);
    cout << "Please input the number of " << item1Name << " bought: ";
    cin >> item1Quantity;
    cout << "Please input the price of " << item1Name << ": $";
    cin >> item1Cost;
    cout << "\n";

    //Get information for second item
    cout << "Please input the name of the second item: ";
    cin.ignore();
    getline(cin, item2Name);
    cout << "Please input the number of " << item2Name << " bought: ";
    cin >> item2Quantity;
    cout << "Please input the price of " << item2Name << ": $";
    cin >> item2Cost;

    //Calculate the total without sales tax
    totalCost = (item1Quantity * item1Cost) + (item2Quantity + item2Cost);

    //Adds sales tax to total
    totalCost = (totalCost * SALES_TAX) + totalCost;

    //Output total to user
    cout << setprecision(2) << fixed << showpoint << "\nYour total bill is: $" << totalCost << endl;

    return 0;
    
}