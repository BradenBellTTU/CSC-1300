/*
        Title:          lab_2b.cpp
        Author:         Braden Bell
        Date:           2-1-2022
        Purpose:        This program helps a user at a convience store to buy>
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
