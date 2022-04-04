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

    //Get directory file from user
    cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
    cin >> dinoDirName;
    //Try to open file
    inFileStream.open(dinoDirName);
    //Verify that the user input was valid and the file open correctly.
    //If not, then ask user for dir name and try again
    while(cin.fail() || !(inFile.is_open())) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input or file not found, please try again.\n";
        cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
        cin DirName;
        inFileStream.open(dinoDirFile);
    }

    //Read data from directory file
    while(getline(dinoDirFile))


    return 0;


}
