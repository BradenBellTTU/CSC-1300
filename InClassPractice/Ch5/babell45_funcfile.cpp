/*  Otherwise, print to the text 
file named result.txt “[NAME], sorry, you get no [FOOD].”  
Then print to standard output “Done.”
The luckyguess() function should have an integer parameter 
(the user’s number) and should return a Boolean.  
In this function, you should generate a random number 
between 1 and 100.  If the user is within 25 numbers of the 
generated number, then return true.  Otherwise, return false.*/

/*
    Title: ch5.cpp
    Author: Braden Bell
    Date: 2.28.22
    Purpose: In class practice for chapter 5
*/


#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

bool luckyguess(int);

int main()
{
	string name, food;
	ofstream outFile;
	int num;
	
	cout << "\n\nWhat is your full name?  ";
	getline(cin, name);
	cout << "What is your favorite food?  ";
	getline(cin, food);
	cout << "What is your favorite number?  ";
	cin >> num;
	
	outFile.open("result.txt");
	
	if(luckyguess(num))
	{
		outFile << name << ", you will get a lifetime supply of ";
		outFile << food << "!\n";
	}
	else
	{
		outFile << name << ", sorry, you get no " << food <<".\n";
	}
	outFile.close();
	cout << "Done." << endl;
	return 0;
}

bool luckyguess(int num)
{
	srand(time(0));
	int randomNum = (rand() % (100 - 1 + 1)) + 1;
	cout << randomNum << endl;
	if (num >= (randomNum - 25) && num <= (randomNum + 25) )
		return true;
	
	else
		return false;
}












