#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomIntGenerator(int, int);

int main() {
    srand(time(0));
    for(int x = 0; x < 10000; x++ ) {
    cout << randomIntGenerator(1,9);
    }
}


int randomIntGenerator(int randLower, int randUpper) {

     return ((rand() % (randUpper - randLower + 1)) + randLower);
}

