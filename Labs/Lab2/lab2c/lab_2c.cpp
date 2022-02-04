/*
        Title:          lab_2c.cpp
        Author:         Braden Bell
        Date:           2.4.2022
        Purpose:        This program takes a student's name and 3 test grades as input, calculates the average
						of the test grades and then outputs it to the user with their name
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
	string studentName;
	double score1, score2, score3, average;

	//Get student name
	cout << "\n\nEnter the student's name: ";
	getline(cin, studentName);
	
	//Get test grades
	cout << "Enter " << studentName << "'s first test grade: ";
	cin >> score1;
	
	cout << "Enter " << studentName << "'s second test grade: ";
	cin >> score2;

	cout << "Enter " << studentName << "'s third test grade: ";
	cin >> score3;
	

	//Calculate average
	cout << setprecision(2) << fixed << showpoint;
	average = (score1 + score2 + score3) / 3;
	
	//Print average to user
	cout << "\n" << studentName << " has a test average of " << average << endl;
	
	return 0;
}
