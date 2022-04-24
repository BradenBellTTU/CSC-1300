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

int deleteHeroes(int, Heroes*);

bool moveArrayElements(string, int, Heroes*);

void printHeroes(int, Heroes*);

void printRentDetails(int, Heroes*);

void saveToFile(int, Heroes*);

#endif






