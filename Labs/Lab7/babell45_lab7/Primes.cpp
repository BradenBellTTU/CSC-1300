#include "Primes.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Find primes within a given range and outputs the prime numbers to the file given by the user in Lab7.cpp
void findPrimes(int lowerRange, int upperRange, string fileName) {

    //Declare output file stream name
    ofstream outFile;

    //Open output file
    outFile.open(fileName);

    //If the file opened correctly, then call isPrime() and pass it every number between lowerRange and upperRange to see if it is prime
    if(outFile.is_open()) {
        outFile << "Below are the all the prime numbers between " << lowerRange << " and " << upperRange << endl;
        for (int i = lowerRange; i < upperRange; i++) {
            if(isPrime(i)) {
                outFile << i << endl;
            }
        }
        //Close output file
        outFile.close();

        //Tell user the operation was successful
        cout << "Prime numbers from " << lowerRange << " to " << upperRange << " have been printed to " << fileName << "\n";
    }

    else {
        cout << "Error opening output file.\n";
    }
}

//Takes an integer as input and determines if it is prime or not by returning true or false
bool isPrime(int x) {
    if (x <= 1)
        return false;

    for (int i = 2; i < x; i++) {
        if ((x % i) == 0) 
            return false;
    }

    return true;
}