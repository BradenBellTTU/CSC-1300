/*
	Title:  	Lab9c.cpp
	Author:		Braden Bell
	Date:		04.04.22
	Purpose:	Lab 9c - vector practice
    Required Files: None
*/

#include <vector>
#include <iostream>
using namespace std;


int main() {
    //Declare vars
    int vectorTotal = 0, temp = 0, min = 0;
    const int NUM_ELEMENTS = 10;
    vector <int> vectorValues(NUM_ELEMENTS);

    //Initialize vector
    vectorValues.at(0) = 7;
    vectorValues.at(1) = 4;
    vectorValues.at(2) = 36;
    vectorValues.at(3) = 1;
    vectorValues.at(4) = 3;
    vectorValues.at(5) = 6;
    vectorValues.at(6) = 2;
    vectorValues.at(7) = 99;
    vectorValues.at(8) = 77;
    vectorValues.at(9) = 10;

    //Multiply vector values by 2 and display them
    cout << "Vector elements, multiplied by 2, are: ";
    for(int i = 0; i < NUM_ELEMENTS; i++) {
        vectorValues.at(i) = vectorValues.at(i) * 2;
        cout << vectorValues.at(i) << ' ';
    }
    cout << "\n";

    //Calculate vector total and display it
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        vectorTotal += vectorValues.at(i);
    }
    cout << "The tottal of all array elements is " << vectorTotal << "\n";

    //Sorting algorithm
    for (int i = 0; i < NUM_ELEMENTS - 2; i++) {
        min = i;
        for (int j = i + 1; j < NUM_ELEMENTS; j++) {
            if (vectorValues.at(j) < vectorValues.at(min))
                min = j;
        }
        temp = vectorValues.at(i);
        vectorValues.at(i) = vectorValues.at(min);
        vectorValues.at(min) = temp;
    }

    //Display sorted vector 
    cout << "The sorted vector elements are: ";
    for (int i = 0; i < NUM_ELEMENTS; i++)
        cout << vectorValues.at(i) << ' ';

    return 0;
}