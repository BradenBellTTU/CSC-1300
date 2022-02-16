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


	//Positivity vs negativity
		//Question 1 dislay
		cout << "Question 1:\n";
		cout << "Imagine a cup of water on the table. It is filled with water\n";
		cout << "up to the half way point. Would you say the glass is...\n";
		cout << "a. Half full\n";
		cout << "b. Half empty\n";
		cout << "c. Both\n";

		//Question 1 input

		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
			cin.clear();
			cin.ignore(255, '\n');
			cout << "Unexpected input." << endl;
			cin >> answer;
		}

		//Apply values to a category depending on answers
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
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
    }

		//Apply values to a category depending on answers
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
				cout << "nope";
		}


		//Question 3 display
		cout << "\n\nQuestion 3:\n";
		cout << "Imagine you go to a resturant and order some food, but the waiter brings out the wrong order!\n";
		cout << "Do you...\n\n";
		cout << "a. Eat the food anyways and don't complain because it's all good food anyways.\n";
		cout << "b. Get angry and leave a bad review online because your meal is ruined.\n";
		cout << "c. Ask the waiter to fix your order.\n";

		//Question 3 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
		switch(answer) {
			case 'a':
				positivity++
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
			

	//Introvert vs Extrovert
		//Question 4 display
		cout << "\n\nQuestion 4:\n";
		cout << "One Friday afternoon your friends invite you to a party where you will be lots of new people\n";
		cout << "This makes you feel...\n\n";
		cout << "a. Exited\n";
		cout << "b. Anxious\n";
		cout << "c. Neutral\n";

		//Question 4 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
		switch(answer) {
			case 'a':
				extrovert++;
				break;

			case 'b':
				introvert--;
				break;

			case 'c':
				extrovert++;
				introvert++;
				break;

			default:
				return 0;
		}		
			

		//Question 5 display
		cout << "\n\nQuestion 5:\n";
		cout << "In 2020, a lot of buisnesses temporarialy closed and most people stayed in their homes for a few months due to COVID-19\n";
		cout << "What was/would be your initial reaction when realizing you would be isolated from other people?\n\n";
		cout << "a. Oh no, I'm really going to miss seeing my friends every day. :(\n";
		cout << "b. Woohoo! I don't have to leave my house!\n";
		cout << "c. Eh, okay.\n";

		//Question 5 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
		switch(answer) {
			case 'a':
				extrovert++;
				break;

			case 'b':
				introvert++;
				break;

			case 'c':
				extrovert++;
				introvert++;
				break;

			default:
				return 0;
		}		


		//Question 6 display
		cout << "\n\nQuestion 6:\n";
		cout << "In general, would you say you...\n";
		cout << "a. find it easy to make friends and have a lot of them.";
		cout << "b. find it difficult to make freinds and only have a few close ones.\n";
		cout << "c. find it neither difficult nor easy to make friends and have an average amount.\n";

		//Question 6 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' && answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
		switch(answer) {
			case 'a':
				extrovert++;
				break;

			case 'b':
				introvert++;
				break;

			case 'c':
				extrovert++;
				introvert++;
				break;

			default:
				return 0;
		}		
			
	//Silly vs Serious
		//Question 7 display
		cout << "\n\nQuestion 7:\n";
		cout << "\n";
		cout << "\n\n";
		cout << "a. \n";
		cout << "b. \n";
		cout << "c. \n";

		//Question 7 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' & answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input. Please enter a, b, or c." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
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
				return 0;

/*
		//Question x display
		cout << "\n\nQuestion x:\n";
		cout << "\n";
		cout << "\n\n";
		cout << "a. \n";
		cout << "b. \n";
		cout << "c. \n";

		//Question x input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' & answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input. Please enter a, b, or c." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
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
				return 0;
		}		
			*/






		//TODO: DISPLAY RESULTS NICELY


		//Ask user if they would like to run the test again
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
