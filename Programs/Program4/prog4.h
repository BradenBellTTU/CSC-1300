#include <iostream>
#include <string>
#include <iomanip>
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

int enterHeroes(int, int, Heroes*);

void deleteHeroes(int, Heroes*);

void moveArrayElements(string, int, Heroes*);

void printHeroes(int, Heroes*);

void printRentDetails(int, Heroes*);

void saveToFile(int, Heroes*);

#endif






