#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	bool doTest;
	do {
		//Variables
		int introvert = 0, extrovert = 0, positivity = 0, negativity = 0, silly = 0, serious = 0, spontaneous = 0, planner = 0;
	    char answer;


		//Display intro
		cout << "\n\n-------------------------------" << endl;
		cout << "      Personality Test         " << endl;
		cout << "-------------------------------" << endl;
		cout << "This is a 12 question personality test designed to gather data" << endl;
		cout << "from 4 different aspects of your personality.\n\n\n\n" << endl;


		//Question 1 dislay
		cout << "Question 1:\n";
		cout << "Imagine a cup of water on the table. It is filled with water\n";
		cout << "up to the half way point. Would you say the glass is...\n";
		cout << "a. Half full\n";
		cout << "b. Half empty\n";
		cout << "c. Both\n";

		//Question 1 input
		cin >> answer;
		switch(answer) {
			case 'a':
				positivity++;
				break;
			case 'b':
				negativity++;
				break;
			case 'c':
				positivity++;
				negativity++;
				break;
			default:
				cout << "\nInvalid input. Please run the program again.\n";
				return 0;
			}
	
		//Question 2 display
		cout << "\n\nQuestion 2:\n";
		cout << "You wake up one morning and stub your toe on your dresser while getting ready\n";
		cout << "You think to yourself...\n\n";
		cout << "a. \"Ow! That hurt but I'm not going to let it ruin my day!\"\n";
		cout << "b. \"Ow! Now my entire day is ruined, life sucks, I'm going back to bed!\"\n";
		cout << "c. \"Ow!\"\n";

		//Question 2 input
		cin >> answer;
		switch(answer) {
			case 'a':
				positivity++;
				break;
			case 'b':
				negativity++;
				break;
			case 'c':
				positivity++;
				negativity++;
				break;
			default:
				cout << "\nInvalid input. Please run the program again.\n";
				return 0;
		}

		//Question x display
		cout << "\n\nQuestion x:\n";
		cout << "\n";
		cout << "\n\n";
		cout << "a. \n";
		cout << "b. \n";
		cout << "c. \n";

		//Question x input
		cin >> answer;
		switch(answer) {
			case 'a':
				//varible++;
				break;
			case 'b':
				//variable++;
				break;
			case 'c':
				//positivity++;
				//negativity++;
				break;
			default:
				cout << "\nInvalid input. Please run the program again.\n";
				return 0;
		}		

		//TODO: DISPLAY RESULTS

		cout << positivity << "\n" << negativity << "\n";



		cout << "Would you like to run the test again? y/n: ";
		cin >> answer;
		if (answer == 'y'){
			//Clear varibles
			introvert = 0, extrovert = 0, positivity = 0, negativity = 0, silly = 0, serious = 0, spontaneous = 0, planner = 0;
			doTest = true;
		}
		else
			doTest = false;
	}


	while(doTest == true);
	return 0;
}
