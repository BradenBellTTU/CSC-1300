#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_LETTERS = 20;
    int min, minCrossRef, max, maxCrossRef;
    char userName[NUM_LETTERS];
    string usefulItems[10];
    double itemPrice[10], sum, avg;
    

    cout << "What is your name? ";
    cin.getline(userName, NUM_LETTERS);
    
    cout << "Tell me 10 useful things and their price:\n";
    for (int i = 1; i <= 10; i++) {
        cout << "USEFUL THING " << i << ": ";
        getline(cin, usefulItems[i]);
        cout << "PRICE FOR THING " << i << ": ";
        cin >> itemPrice[i];
        cin.ignore();
    }

    min = itemPrice[0];
    for (int i = 0; i <= 10; i++) {
        if(itemPrice[i] < min) {
            min = itemPrice[i];
            minCrossRef = i;
        }
    }

    max = itemPrice[0];
    for (int i = 0; i <= 10; i++) {
        if (itemPrice[i] > max) {
            max = itemPrice[i];
            maxCrossRef = i;
        }
    }

    for (int i = 0; i <= 10; i++) {
        sum = itemPrice[i];
    }
    avg = (sum / 10);

    cout << "****RESULTS****\n";
    cout << "HIGHEST PRICE: " << usefulItems[maxCrossRef] << " with price $" << max << "\n";
    cout << "LOWEST PRICE: " << usefulItems[minCrossRef] << " with price $" << min << "\n";
    cout << "AVERAGE PRICE: $" << avg; 
}