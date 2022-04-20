/*
	Title:  	Program 3
	Author:		Braden Bell
	Date:		04.06.22
	Purpose:	Dinosaur File Parsing
    Required Files: dinoDirectory.txt, carnivores.txt, herbivores.txt, carnOutFile.txt, herbOutFile.txt, otherOutFile.txt
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//Prototypes
int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivore(string);
void printDino(ofstream&, ifstream&, string, int[]);
bool overTenGrand(string);
void printResults(int[], string[]);
void clearFile(string);



int main() {

    //main Vars
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

    //Verify that the user input was valid and the file opens correctly.
    //If not, then ask user for dir name and try again
    while(cin.fail() || !(inFileStream.is_open())) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input or file not found, please try again.\n";
        cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
        cin >> dinoDirName;
        inFileStream.open(dinoDirName);
    }

    //Clear the output files if they already exist
    clearFile("carnOutFile.txt");
    clearFile("herbOutFile.txt");
    clearFile("otherOutFile.txt");

    //Start parsing of dir file and store the sections divided by # in the tempString var
    while(getline(inFileStream, tempString, '#')) {

        //Check for 'saurus' in the temp string
        found = tempString.find("saurus");
        if (found != string::npos)
            totalsArray[4] += 1;

        //Check if the value of tempString is a carnivore, herbivore, or other and set file stream for printDinoFunction depending on result
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
                cout << tempString << " is being printed to the HERBIVORE file!\n";
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

    //Print results to the console, close remaining file streams, and end program
    printResults(totalsArray, labelsArray);
    outFileStream.close();
    inFileStream.close();
    return 0;
}
    

/*
                            -=searchCarnivore Function=-
Type: bool
Desc: Takes a string as input and checks to see if it appears in the carnivores.txt file.
If the string appears in the file, the the function returns true. If it does not appear in the file, it returns false.
*/
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


/*
                            -=searchHerbivore Function=-
Type: bool
Desc: Takes a string as input and checks to see if it appears in the herbivore.txt file.
If the string appears in the file, the function returns true. If it does not appear in the file, it returns false
*/
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


/*
                                    -=overTenGrand Function=-
Type: bool
Desc: Takes a string as input. The string is expected to be in the format "[number] to [number] lbs"
The function will take a string in that format, remove the first [number], the 'to', and the ' lbs' so
only the right most number is left. That number is compared to 10k and the function returns true or false
if the number is over 10k or not.
*/
bool overTenGrand(string mass) {
    //Function vars
    int num = 0;
    size_t found;

    //Looks for 'to ' in the string passed to the function and removes it
    found = mass.find("to ");
    if (found != string::npos) {
        mass.erase(mass.begin(), mass.begin()+(found+2));
    }

    //Convert the 'mass' string to an integer and store it in num
    //If the string has a ',' in it, this operation will truncate everything after the ',' so a fix is needed below
    num = stoi(mass);

    //Check mass to see if there is a ',' present and if so, fix num by multiplying it by 1000
    found = mass.find(",");
    if (found != string::npos) {
        //cout << "Comma found" << endl;
        num *= 1000;
    }
    
    //Check to see if num is greater than 10k and return values appropriately
    if (num > 10000) 
        return true;
    
    else
        return false;
}


/*
                                                -=printDino Function=-
Type: void
Desc: This function takes a file output stream, a file input stream, a string contianing an animal name, and the totals array.
It takes the animal name, references data from the in file stream, and outputs the data to the out file stream in an easy to read format.
It also increases the third index of totalsArray by one if the animal is over 10k pounds. It determines this by calling the overTenGrand() function.
*/
void printDino(ofstream& outFileStream, ifstream& inFileStream, string animalName, int totalsArray[]) {
    //Function vars
    string tempString;
    size_t found;
    const int DINO_INFO_LEN = 4;
    
    //Output dino name to the output file
    outFileStream << "DINOSAUR NAME: " << setw(1) << " " << animalName << "\n";

    //Take the data from the next 4 sections of the file and store it in tempString
    for(int i = 0; i < DINO_INFO_LEN; i++) {
        getline(inFileStream, tempString, '#');

        //Check to see if tempString has ' lbs' in it; if it does then check to see if it's over 10k and update totalsArray accordingly
        found = tempString.find(" lbs");
        if ((found != string::npos) && (overTenGrand(tempString)))
            totalsArray[3] += 1;

        //Depending on what i is, output the category name and the category data held in tempString to the output file stream
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
            
            //Catch all, should never execute unless there is an error
            default:
                cout << "Error in printDino\n";
                break;
        }
    }
}


/*
                                                        -=carnOrHerb Function=-
Type: int
Desc: This function takes the animal name as a string input and checks it by calling the searchCarnivore function and searchHerbivore function.
If searchCarnivore returns true, then the function returns 1 to indicate the animal is a carnivore. If searchHerbivore returns true, then the
function returns 2 to indicate the animal is an herbivore. If neither returns true, return -1 to indicate the "other" option.
*/
int carnOrHerb(string animalName) {
    if (searchCarnivore(animalName))
        return 1;

    else if (searchHerbivore(animalName))
        return 2;

    else
        return -1;
}


/*
                                                        -=printResults Function=-
Type: void
Desc: Takes the totalsArray, and the labelsArray function, iterates through them with a for loop, and displays their content to the console
*/
void printResults(int totalsArray[], string labelsArray[]) {
    string line(50, '-');
    const int LEN = 6;

    cout << line << '\n';

    for (int i = 0; i < LEN; i++) {
        cout << labelsArray[i] << ": " << totalsArray[i] << '\n';
    }

    cout << line << '\n';
}


/*
                                                -=clearFile Function=-
Type: void
Desc: Takes the input of a file name as a string and clears all contents of the file. This is used at the beginning of the
program to make sure the output filesa are empty. This function was not required but came in handy when debugging so I left it in.
*/
void clearFile(string fileName) {
    ofstream outFileStream;
    outFileStream.open(fileName, ios::trunc);
    outFileStream.close();
}