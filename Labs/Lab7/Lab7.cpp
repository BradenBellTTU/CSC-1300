#include "Primes.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main() {
    ifstream rangeFile;
    int fileLowerRange, fileUpperRange;

    rangeFile.open("Range.txt");
    if (!rangeFile.is_open()) {
        cout << "Error opening Range.txt\n";
        return 1;
    }


    rangeFile >> fileLowerRange;
    if (rangeFile.fail()) {
        cout << "Error reading lower range from file, defaulting to 1\n";
        fileLowerRange = 1;
    }

    rangeFile >> fileUpperRange;
    if (rangeFile.fail()) {
        cout << "Error reading upper range from file, defaulting to 10\n";
        fileUpperRange = 10;
    }

    
    cout << fileLowerRange << "\n" << fileUpperRange;


    return 0;
}