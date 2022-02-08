#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int answer, positivityRank = 0;
	bool validAnswer = false;
	cout << "\n\n-------------------------------" << endl;
	cout << "      Personality Test         " << endl;
	cout << "-------------------------------" << endl;
	cout << "This is a 12 question personality test designed to gather data" << endl;
	cout << "from 4 different aspects of your personality." << endl;

	cout << "Question 1:\n";
	cout << "Imagine a cup of water on the table. It is filled with water\n";
	cout << "up to the half way point. Would you say the glass is...\n";
	cout << "1. Half full\n";
	cout << "2. Half empty\n";
	cout << "3. Both\n";

	while(validAnswer == false) {

		cin >> answer;
		switch(answer) {
			case 1:
				positivityRank += 1;
				validAnswer = true;
				break;
			case 2:
				positivityRank -= 1;
				validAnswer = true;
				break;
			case 3:
				validAnswer = true;
				break;
			default:
				cout << "\nInvalid input. Please try again";
				validAnswer = false;
				break;
		}
	}
	
	cout << "\n" << positivityRank << endl;
	return 0;
}
