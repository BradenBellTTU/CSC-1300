#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int introvert = 0, extrovert = 0, positivity = 0, negativity = 0, silly = 0, serious = 0, spontaneous = 0, planner = 0;
	string answer;
	bool validAnswer = false;
	while(true) {
		

		//Intro
		cout << "\n\n-------------------------------" << endl;
		cout << "      Personality Test         " << endl;
		cout << "-------------------------------" << endl;
		cout << "This is a 12 question personality test designed to gather data" << endl;
		cout << "from 4 different aspects of your personality.\n\n\n\n" << endl;

		//Question 1
		cout << "Question 1:\n";
		cout << "Imagine a cup of water on the table. It is filled with water\n";
		cout << "up to the half way point. Would you say the glass is...\n";
		cout << "a. Half full\n";
		cout << "b. Half empty\n";
		cout << "c. Both\n";

		while(validAnswer == false) {
			getline(cin, answer);
			answer.tolower();
			switch(answer) {
				case 'a':
					positivity++;
					validAnswer = true;
					break;
				case 'b':
					negativity--;
					validAnswer = true;
					break;
				case 'c':
					positivity++;
					negativity++;
					validAnswer = true;
					break;
				default:
					cout << "\nInvalid input. Please try again";
					break;
			}
		}
		cout << positivity << "\n" << negativity;

		//TODO: DISPLAY RESULTS





		cout << "Would you like to run the test again? y/n: ";
		getline(cin, answer);
		answer.tolower();
		if (answer == "y"){
			//Clear varibles
			introvert = 0, extrovert = 0, positivity = 0, negativity = 0, silly = 0, serious = 0, spontaneous = 0, planner = 0;
			validAnswer = false;
		}
		else 
			return 0;
	}
}
