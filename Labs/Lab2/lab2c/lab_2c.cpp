#include <iostream>
#include <string>
using namespace std;


int main {
	string studentName;
	double score1, score2, score3, average;

	//Get student name
	cout << "Enter the student's name: ";
	getline(cin, studentName);
	cin.ignore();
	
	//Get test grades
	cout << "Enter " << studentName << "'s first test grade: ";
	cin >> score1
	
	cout << "Enter " << studentName << "'s second test grade: ";
	cin >> score2

	cout << "Enter " << studentName << "'s third test grade: ";
	cin >> score3
	
	//Calculate average
	average = (score1 + score2 + score3) / 3;
	
	//Print average to user
	cout << studentName << " has a test average of " << average << endl;
	
}
