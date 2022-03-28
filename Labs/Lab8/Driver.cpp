/*
	Title:  	Lab8.cpp
	Author:		Braden Bell
	Date:		03.28.22
	Purpose:	Lab 8
    Required Files: Elephant.h; Functions.cpp
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "Elephant.h"

using namespace std;

int main() {
    //Define vars
    const int SIZE = 10;
    float foodTotal = 0, foodAverage = 0;
    int mostFoodEaten = 0;
    char zooName[100];
    float poundsEaten[SIZE];
    string elephantNames[SIZE];

    //Get name of zoo and store it in a cstring
    cout << "Hello! What is the name of your zoo?\n";
    cin.getline(zooName, 100);

    //Call functions
    getElephantData(poundsEaten, elephantNames, SIZE);

    getStats(poundsEaten, SIZE, foodTotal, foodAverage, mostFoodEaten);

    //Print line of dashes
    for (int i = 0; i < 80; i++)
        cout << "-";

    //Display results
    cout << setprecision(2) << fixed << showpoint;
    cout << "\nThe total amount of food consumed by all " << SIZE << " elephants at " << zooName << " is " << foodTotal << " in one month.\n";
    cout << "The average amount of food consimed at " << zooName << " is " << foodAverage << " pounds.\n\n\n";
    cout << "The elephant who eats the most (" << poundsEaten[mostFoodEaten] << " pounds) is " << elephantNames[mostFoodEaten] << "!\n";

    //Print line of dashes
    for (int i = 0; i < 80; i++)
        cout << "-";
}