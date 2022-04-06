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
void clearFile(string);



int main() {
    ifstream inFileStream;
    ofstream outFileStream;
    size_t found;
    string dinoDirName;
    string tempString;
    const int LEN = 6, DINO_INFO_LEN = 4;
    int totalsArray[LEN] = {0, 0, 0, 0, 0, 0};
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

    //Clear the output files
    clearFile("carnOutFile.txt");
    clearFile("herbOutFile.txt");
    clearFile("otherOutFile.txt");


    while(getline(inFileStream, tempString, '#')) {
        found = tempString.find("saurus");
        if (found != string::npos)
            totalsArray[4] += 1;

        switch (carnOrHerb(tempString)) {
            case 1:
                totalsArray[1] += 1;
                totalsArray[0] += 1;
                outFileStream.open("carnOutFile.txt", ios::app);
                cout << tempString << " is being printed to the CARNIVORE file!\n";
                break;

            case 2:
                totalsArray[2] += 1;
                totalsArray[0] += 1;
                outFileStream.open("herbOutFile.txt", ios::app);
                cout << tempString << " is being printed to the HERBAVORE file!\n";
                break;

            case -1:
                totalsArray[5] += 1;
                outFileStream.open("otherOutFile.txt", ios::app);
                cout << tempString << " is being printed to the OTHER file!\n";
                break;
        }
        printDino(outFileStream, inFileStream, tempString, totalsArray);
        outFileStream << '\n';
        outFileStream.close();
    }

    printResults(totalsArray, labelsArray);
    outFileStream.close();
    inFileStream.close();
    return 0;
}
    
    /*Read data from directory file
    while(getline(inFileStream, tempString,'#')) {
        cout << tempString << ' ';
    }
    */




//TODO: WRITE DESC
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

//TODO: WRITE DESC
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

bool overTenGrand(string mass) {
    int num = 0;
    size_t found;

    found = mass.find("to ");
    if (found != string::npos) {
        //cout << "'to' found" << endl;
        mass.erase(mass.begin(), mass.begin()+(found+2));
        //cout << "New String: " << mass << endl;
    }

    cout << mass << "\n";
    num = stoi(mass);
    found = mass.find(",");

    if (found != string::npos) {
        //cout << "Comma found" << endl;
        num *= 1000;
    }
    
    if (num > 10000) 
        return true;
    
    else
        return false;
}

void printDino(ofstream& outFileStream, ifstream& inFileStream, string animalName, int totalsArray[]) {
    string tempString;
    size_t found;
    const int DINO_INFO_LEN = 4;
    
    outFileStream << "DINOSAUR NAME: " << setw(1) << " " << animalName << "\n";
    for(int i = 0; i < DINO_INFO_LEN; i++) {
        getline(inFileStream, tempString, '#');
        found = tempString.find(" lbs");
        if ((found != string::npos) && (overTenGrand(tempString)))
            totalsArray[3] += 1;

        switch (i) {
            case 0:
                outFileStream << "HEIGHT: " << setw(8) << " " << tempString << "\n";
                break;
            
            case 1:
                outFileStream << "WEIGHT: " << setw(8) << " " << tempString << "\n";
                break;
            
            case 2:
                outFileStream << "EATS: " << setw(10) << " " << tempString << "\n";
                break;
            
            case 3:
                outFileStream << "DESCRIPTION: " << setw(3) << " " << tempString << "\n";
                break;
            
            default:
                cout << "Error in printDino\n";
                break;
        }
    }
}


int carnOrHerb(string animalName) {
    if (searchCarnivore(animalName))
        return 1;

    else if (searchHerbivore(animalName))
        return 2;

    else
        return -1;
}

void printResults(int totalsArray[], string labelsArray[]) {
    string line(50, '-');
    const int LEN = 6;

    cout << line << '\n';

    for (int i = 0; i < LEN; i++) {
        cout << labelsArray[i] << ": " << totalsArray[i] << '\n';
    }
}

void clearFile(string fileName) {
    ofstream outFileStream;
    outFileStream.open(fileName, ios::trunc);
    outFileStream.close();
}