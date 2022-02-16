/*
    Title: prog1.cpp
    Author: Braden Bell
    Date: Feb 15, 2022
    Purpose: This is a 12 question personality test designed to gather data from four different aspects of the user's personality
			 Everything required for program 1 should be covered.
*/


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
		cout << "\n\n-------------------------------\n";
		cout << "      Personality Test         \n";
		cout << "-------------------------------\n";
		cout << "This is a 12 question personality test designed to gather data\n";
		cout << "from 4 different aspects of your personality.\n\n";


	//Positivity vs negativity
		//Question 1 dislay
		cout << "Question 1:\n";
		cout << "Imagine a cup of water on the table. It is filled with water\n";
		cout << "up to the half way point. Would you say the glass is...\n";
		cout << "     a. Half full\n";
		cout << "     b. Half empty\n";
		cout << "     c. Both\n";

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
		cout << "     a. \"Ow! That hurt but I'm not going to let it ruin my day!\"\n";
		cout << "     b. \"Ow! Now my entire day is ruined, life sucks, I'm going back to bed!\"\n";
		cout << "     c. \"Ow!\"\n";

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
		cout << "     a. Eat the food anyways and don't complain because it's all good food anyways.\n";
		cout << "     b. Get angry and leave a bad review online because your meal is ruined.\n";
		cout << "     c. Ask the waiter to fix your order.\n";

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
			

	//Introvert vs Extrovert
		//Question 4 display
		cout << "\n\nQuestion 4:\n";
		cout << "One Friday afternoon your friends invite you to a party where you will be lots of new people\n";
		cout << "This makes you feel...\n\n";
		cout << "     a. Exited\n";
		cout << "     b. Anxious\n";
		cout << "     c. Neutral\n";

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
		cout << "     a. Oh no, I'm really going to miss seeing my friends every day. :(\n";
		cout << "     b. Woohoo! I don't have to leave my house!\n";
		cout << "     c. Eh, okay.\n";

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
		cout << "In general, would you say you...\n\n";
		cout << "     a. find it easy to make friends and have a lot of them.\n";
		cout << "     b. find it difficult to make freinds and only have a few close ones.\n";
		cout << "     c. find it neither difficult nor easy to make friends and have an average amount.\n";

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
		cout << "You enter a sweepstakes and win a paid in full vacation to your favorite place\n";
		cout << "What is your reaction?\n\n";
		cout << "     a. Yell \"Yipee!\" and dance around the room\n";
		cout << "     b. Think to yourself \"Awesome\" and just smile\n";
		cout << "     c. Think to yourself \"Oh. Neat.\"\n";

		//Question 7 input
		cin >> answer;
		while (cin.fail() || (answer != 'a' && answer != 'b' & answer != 'c')) {
        	cin.clear();
        	cin.ignore(255, '\n');
        	cout << "Unexpected input." << endl;
        	cin >> answer;
		}

		//Apply values to a category depending on answers
		switch(answer) {
			case 'a':
				silly++;
				break;

			case 'b':
				serious++;
				break;

			case 'c':
				serious++;
				silly++;
				break;

			default:
				return 0;
		}

		//Question 8 display
		cout << "\n\nQuestion 8:\n";
		cout << "One day you decide to volenteer at a puppy shelter\n";
		cout << "As you start trying to work, puppies surround you. What do you do?\n\n";
		cout << "     a. Drop what you were supposed to be doing and play with the puppies.\n";
		cout << "     b. Ignore them and get your job done.\n";
		cout << "     c. Play with the puppies while doing your work.\n";

		//Question 8 input
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
				silly++;
				break;

			case 'b':
				serious++;
				break;

			case 'c':
				serious++;
				silly++;
				break;

			default:
				return 0;
		}	


		//Question 9 display
		cout << "\n\nQuestion 9:\n";
		cout << "Your cellphone rings one night and you answer it to find someone asking you if your refrigerator is running\n";
		cout << "Do you...\n\n";
		cout << "     a. Try to turn the joke around on them and prank call them back.\n";
		cout << "     b. Lecture them about how they're wasting your time.\n";
		cout << "     c. Just hang up.\n";

		//Question 9 input
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
				silly++;
				break;

			case 'b':
				serious++;
				break;

			case 'c':
				silly++;
				serious++;
				break;

			default:
				return 0;
		}		


	//Spontanious vs Planner
		//Question 10 display
		cout << "\n\nQuestion 10:\n";
		cout << "If you go on a vacation do you...\n\n";
		cout << "     a. Make a day by day schedule that you follow to the T.\n";
		cout << "     b. Go in completly blind with no schedule at all.\n";
		cout << "     c. Make loose plans but you don't have to stick to them.\n";

		//Question 10 input
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
				planner++;
				break;

			case 'b':
				spontaneous++;
				break;

			case 'c':
				planner++;
				spontaneous++;
				break;

			default:
				return 0;
		}		


		//Question 11 display
		cout << "\n\nQuestion 11:\n";
		cout << "In your day to day life, do you...\n\n";
		cout << "     a. Have a routine that you never veer from.\n";
		cout << "     b. Do something different every day. Whatever happens happens.\n";
		cout << "     c. Have a routine but you change it up every once and a while.\n";

		//Question 11 input
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
				planner++;
				break;

			case 'b':
				spontaneous++;
				break;

			case 'c':
				planner++;
				spontaneous++;
				break;

			default:
				return 0;
		}


		//Question 12 display
		cout << "\n\nQuestion 12:\n";
		cout << "In school, do you...\n\n";
		cout << "     a. Use a planner so you can see all the due dates and get them done ahead of time.\n";
		cout << "     b. Go with the flow and try to remember all the dates in your head.\n";
		cout << "     c. Remember some in your head and write down others that may be important.\n";

		//Question 12 input
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
				planner++;
				break;

			case 'b':
				spontaneous++;
				break;

			case 'c':
				planner++;
				spontaneous++;
				break;

			default:
				return 0;
		}		

		cout << setw(25) << "RESULTS" << endl;
		cout << "--------------------------------------------\n";


		//Introvert vs Extrovert comparison
		if (introvert > extrovert)
			cout << "You are an introvert.\n";

		else if (extrovert > introvert)
			cout << "You are an introvert.\n";

		else
			cout << "You are not an introvert or extrovert\n";
		

		//Positivity vs Negativity comparison
		if (positivity > negativity)
			cout << "You are a positive person.\n";

		else if (negativity > positivity)
			cout << "You are a negative person.\n";

		else
			cout << "You are not a positive or negative person.\n";


		//Silly vs Serious comparison
		if (silly > serious)
			cout << "You are a silly person.\n";

		else if (serious > silly)
			cout << "You are a serious person.\n";

		else
			cout << "You are not a silly or serious person.\n";


		if (spontaneous > planner)
			cout << "You are spontaneous.\n";
		
		else if (planner > spontaneous)
			cout << "You are a planner.\n";

		else
			cout << "You are not spontaneous or a planner.\n";

		cout << "--------------------------------------------\n";

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

