#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int enterHeroes(int maxHeroes, int numHeroes, Heroes*) {
    cout << "Yup the function is being called.\n";
}

void deleteHeroes(int, Heroes*);

void moveArrayElements(string, int, Heroes*);

void printHeroes(int, Heroes*);

void printRentDetails(int, Heroes*);

void saveToFile(int, Heroes*);