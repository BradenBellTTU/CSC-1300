#include "Primes.h"
#include <iostream>
#include <string>
using namespace std;

void findPrimes(int lowerRange, int upperRange, string fileName) {
    for (int i = lowerRange; i < upperRange; i++) {
        if(isPrime(i)) {
            //output i to file
        }
    }


}

bool isPrime(int x) {
    int factorCount = 0;

    for (int i = 1; i < x; i++) {
        if ((x % i) == 0) 
            factorCount++;

        if factorCount > 2
            return false;         
    }
    return true;
}