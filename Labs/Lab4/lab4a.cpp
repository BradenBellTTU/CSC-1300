/*
	Title:  	Lab4a.cpp
	Author:		Braden Bell
	Date:		02.20.22
	Purpose:	Time management and logical operators
*/

#include <iostream>
using namespace std;

int main() {

    //Variables
    int screenHours, studyHours;


    //Get phone screen time from user
    cout << "\n\nRounding to the nearest hour, how many hours is your daily average PHONE screen time?\n";
    cout << "AVG DAILY SCREEN-TIME HOURS: ";
    cin >> screenHours;


    //Get study hours from user
    cout << "\nRounding to the nearest hour, how many hours is your daily average study or homework time?\n";
    cout << "AVG DAILY STUDY or HOMEWORK HOURS: ";
    cin >> studyHours;


    //Logical operator statements to determine what to output
    if (screenHours <= 2 && studyHours >= 6)
        cout << "\nYou need to socialize with people more often.\n";
    
    else if (screenHours >= 2 && studyHours >= 6)
        cout << "\nYou need to socialize more often and get off that phone.\n";
    
    else if (screenHours <= 2 && studyHours >= 2 && studyHours <= 6)
        cout << "\nYou manage your time well.\n";
    
    else if (screenHours > 2 && studyHours < 6)
        cout << "\nWhat are you going to do if you lose that phone? It is interfering with your ability to have a real life.\n";


    return 0;
}