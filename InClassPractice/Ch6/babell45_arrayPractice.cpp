/*
	Title:  	Lab5a.cpp
	Author:		Braden Bell
	Date:		03.22.22
	Purpose:	In class practice for ch6
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    //vars
    int findHighest(double*, int);
    int findLowest(double*, int);
    double findAvg(double*, int);
    const int NUM_LETTERS = 20;
    const int NUM_ITEMS = 10;
    int min = 0, max = 0;
    char userName[NUM_LETTERS];
    string usefulItems[NUM_ITEMS];
    double itemPrice[NUM_ITEMS], sum, avg;
    
    //Ask user for name and store it in a cstring
    cout << "What is your name? ";
    cin.getline(userName, NUM_LETTERS);
    
    //Ask user for things
    cout << "Tell me " << NUM_ITEMS << " useful things and their price:\n";
    for (int i = 0; i < NUM_ITEMS; i++) {
        cout << "USEFUL THING " << i + 1 << ": ";
        getline(cin, usefulItems[i]);
        cout << "PRICE FOR THING " << i + 1 << ": ";
        cin >> itemPrice[i];
        cin.ignore();
    }

    //Call functions
    min = findLowest(itemPrice, NUM_ITEMS);

    max = findHighest(itemPrice, NUM_ITEMS);

    avg = findAvg(itemPrice, NUM_ITEMS);

    //Display results
    cout << "\n\n****RESULTS****\n";
    cout << "HIGHEST PRICE: " << usefulItems[max] << " with price $" << itemPrice[max] << "\n";
    cout << "LOWEST PRICE: " << usefulItems[min] << " with price $" << itemPrice[min] << "\n";
    cout << "AVERAGE PRICE: $" << avg << "\n"; 
    
}


//Takes itemPrice array and NUM_ITEMS as input and returns the index value of the higest value in the array
int findHighest(double itemPrice[], int NUM_ITEMS) {
    int max = 0;
    int maxVal = 0;
    max = itemPrice[0];
    for (int i = 0; i < NUM_ITEMS; i++) {
        if (itemPrice[i] > max) {
            maxVal = i;
        }
    }
    return maxVal;
}

//Takes itemPrice array and NUM_ITEMS as input and returns the index value of the lowest value in the array
int findLowest(double itemPrice[], int NUM_ITEMS) {
    int min = 0;
    int minVal = 0;
    min = itemPrice[0];
    for (int i = 1; i < NUM_ITEMS; i++) {
        cout << "i = " << i << endl << "min = " << min << endl;
        if(itemPrice[i] < min) {
            minVal = i;
        }
    }
    return minVal;
}

//Takes itemPrice array and NUM_ITEMS as input and returns the average of all values in the array
double findAvg(double itemPrice[], int NUM_ITEMS) {
        int sum = 0;
        for (int i = 0; i < NUM_ITEMS; i++) {
        sum += itemPrice[i];
        }
    return (sum / static_cast<double>(NUM_ITEMS));
}