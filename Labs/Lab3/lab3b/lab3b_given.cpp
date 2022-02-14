/*******************************************************************
	Title: 		lab3b.cpp
	Author: 	April Crockett, MODIFIED BY ________
	Date:  		January 29, 2022, MODIFIED ON _________
	Purpose: 	Practice with random numbers, string, and branching
********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int randomNum1, randomNum2;
	string name, anotherName, location1, location2, food1, food2;
	string adjective1, adjective2;
	string original;
	
	/* !!!!! ADD THE STATEMENT HERE THAT WILL SEED THE RANDOM NUMBER GENERATOR BASED ON COMPUTER TIME */
	srand(time(0));
	
	cout << "Good afternoon!  Please enter the following information:\n\n";
	cout << "YOUR NAME:  ";
	getline(cin, name);
	cout << "ANOTHER PERSON\'s NAME:  ";
	getline(cin, anotherName);
	cout << "LOCATION ONE NAME:  ";
	getline(cin, location1);
	cout << "LOCATION TWO NAME:  ";
	getline(cin, location2);
	cout << "FOOD ONE NAME:  ";
	getline(cin, food1);
	cout << "FOOD TWO NAME:  ";
	getline(cin, food2);
	cout << "ADJECTIVE ONE:  ";
	getline(cin, adjective1);
	cout << "ADJECTIVE TWO:  ";
	getline(cin, adjective2);
	
	cout << endl;
	
	/* !!!!! GENERATE A RANDOM NUMBER THAT IS EITHER A 1 OR 2 AND SAVE IN randomNum1 */
	
	randomNum1 = (rand() % 2) + 1;

	if (randomNum1 == 1)
	{
		original = name +", the moon moves into " + location1 + " today, putting you in a " + adjective1 + " mood. ";
		original += "Watch out for " + anotherName + ", they have explosive " + adjective2 + " due to eating " + food2;
		original += ". You will make two new friends today";
	}
	else if(randomNum1 == 2)
	{
		original = name +", the sun moves into " + location2 + " tomorrow, putting you in a " + adjective2 + " mood. ";
		original += "Watch out for " + anotherName + ", they will be a little extra today and will constantly ";
		original += "be doing some " + adjective1 + " dancing due to eating " + food2;
		original += ". You will meet your soulmate today";
	}
	
	/* !!!!! GENERATE ANOTHER RANDOM NUMBER BETWEEN 1-100 AND SAVE IN randomNum2 */
	
	randomNum2 = (rand() % 100) + 1;

	cout << original;
	
	/* !!!!!COMPLETE THE FOLLOWING if/else if/else block so that if randomNum 2 is 
		greater than or equal to 80, it will print out " and then you die.\n\n"
		Otherwise, if randomNum2 is greater than or equal to 60, it will print out " and so does your dog.\n\n"
		Otherwise, if randomNum2 is greater than or equal to 40, it will print out " in your car.\n\n"
		Otherwise, (randomNum2 is less than 40) it will print out " at the dump.\n\n";
	*/
	
	if (randomNum2 >= 80)
		cout << " and then you die.\n\n";

	else if (randomNum2 >= 60)
		cout << " and so does your dog.\n\n";
	
	else if (randomNum2 >= 40)
		cout << " in your car.\n\n";
	
	else if (randomNum2 < 40)
		cout << " at the dump.\n\n";
	
	cout << endl;
	return 0;
}