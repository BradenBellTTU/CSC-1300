#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	bool doQuiz = true;
	while(doQuiz == true) {
		//Variables
		int introvert = 0, extrovert = 0, positivity = 0, negativity = 0, silly = 0, serious = 0, spontaneous = 0, planner = 0;
		char answer;
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
					positivity++;
					validAnswer = true;
					break;
				case 2:
					negativity--;
					validAnswer = true;
					break;
				case 3:
					validAnswer = true;
					positivity++;
					negativity++;
					break;
				default:
					cout << "\nInvalid input. Please try again";
					validAnswer = false;
					break;
			}
		}
		

	}
	return 0;
}
