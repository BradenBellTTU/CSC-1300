#include "Primes.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main() {
    ifstream rangeFile;
    ofstream outFile;
    string outFileName;
    int fileLowerRange, fileUpperRange;

    //Open range file
    rangeFile.open("Range.txt");

    //If the file did not open, tell user there was an error and returns an error state
    if (!rangeFile.is_open()) {
        cout << "Error opening Range.txt\n";
        return 1;
    }

    //Read first line of the file and checks to see if it was successful. If not it tells the user there was an error and defaults fileLowerRange to 1
    rangeFile >> fileLowerRange;
    if (rangeFile.fail()) {
        cout << "Error reading lower range from file, defaulting to 1\n";
        fileLowerRange = 1;
    }

    //Read second line of the file and checks to see if it was successful. If not it tells the user there was an error and defaults fileUpperRange to 10
    rangeFile >> fileUpperRange;
    if (rangeFile.fail()) {
        cout << "Error reading upper range from file, defaulting to 10\n";
        fileUpperRange = 10;
    }

    //Asks user what the name of the file is that they want the results printed to
    cout << "What is the name of the file you want the prime numbers to be printed to?\n";
    getline(cin, outFileName);

    //Call findPrimes
    findPrimes(fileLowerRange, fileUpperRange, outFileName);


    return 0;
}