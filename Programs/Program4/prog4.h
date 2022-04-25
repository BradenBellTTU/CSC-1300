#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#ifndef PROG4_H
#define PROG4_H

struct Rent {
    float cost;
    float damage_cost;
    float years;
};

struct Heroes {
    string name;
    string description;
    bool dangerous;
    Rent rent;
};

//DONE
int enterHeroes(int, int, Heroes*);

//DONE (waiting on Jeb's moveArrayElements)
int deleteHeroes(int, Heroes*);

//Jeb
bool moveArrayElements(string, int, Heroes*);

//DONE
void printHeroes(int, Heroes*);

//WIP
void printRentDetails(int, Heroes*);

//DONE
void saveToFile(int, Heroes*);


#endif






