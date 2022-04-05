/*
	Title:  	Program 3
	Author:		Braden Bell
	Date:		04.04.22
	Purpose:	Dinosaur File Parsing
    Required Files: dinoDirectory.txt, carnivores.txt, herbivores.txt
*/



#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivore(string);
void printDino(ofstream&, ifstream&, string, int[]);
bool overTenGrand(string);
void printResults(int[], string[]);


int main() {
    ifstream inFileStream;
    string dinoDirName;
    string tempString;
    const int LEN = 6;
    int totalsArray[LEN];
    string labelsArray[LEN] = {"TOTAL DINOS", "TOTAL CARNIVORE DINOS", "TOTAL HERBIVORE DINOS", "DINOS OVER 10,000 LBS", "DINO NAMES END IN 'SAURUS'", "ANIMALS NOT DINOS"};

    //Get directory file from user
    cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
    cin >> dinoDirName;
    //Try to open file
    inFileStream.open(dinoDirName);
    //Verify that the user input was valid and the file open correctly.
    //If not, then ask user for dir name and try again
    while(cin.fail() || !(inFileStream.is_open())) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input or file not found, please try again.\n";
        cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
        cin >> dinoDirName;
        inFileStream.open(dinoDirName);
    }

    cout << searchCarnivore("Tyrannosaurus Rex") << endl;
    cout << searchCarnivore("hello") << endl;
    cout << searchHerbivore("Triceratops") << endl;
    cout << searchHerbivore("Hello") << endl;
    /*Read data from directory file
    while(getline(inFileStream, tempString,'#')) {
        cout << tempString << ' ';
    }
    */

   inFileStream.close();
    return 0;
}

bool searchCarnivore(string animalName) {
    //Function vars
    ifstream inFileStream;
    string tempString;
    inFileStream.open("carnivores.txt");

    //Check to see if the file is open, if not return false automatically
    if (!(inFileStream.is_open())) {
        cout << "Error opening carnivores.txt\n";
        return false;
    }

    //Iterate through carnivore.txt and compare everything to animalName
    while(getline(inFileStream, tempString, '#')) {
        if (tempString == animalName) {
            inFileStream.close();
            return true;
        }
    }

    //Catch all
    inFileStream.close();
    return false;
}



bool searchHerbivore(string animalName) {
    //Function vars
    ifstream inFileStream;
    string tempString;
    inFileStream.open("herbivores.txt");

    //Check to see if the file is open, if not return false automatically
    if (!(inFileStream.is_open())) {
        cout << "Error opening herbivore.txt\n";
        return false;
    }

    //Iterate through carnivore.txt and compare everything to animalName
    while(getline(inFileStream, tempString, '#')) {
        if (tempString == animalName) {
            inFileStream.close();
            return true;
        }
    }

    //Catch all
    inFileStream.close();
    return false;
}
