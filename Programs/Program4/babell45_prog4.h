#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#ifndef BABELL_45_PROG4_H
#define BABELL_45_PROG4_H

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

void enterHeroes(int, int, int*);

#endif






