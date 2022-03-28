#include <iostream>
#include <string>
using namespace std;

void getElephantData(float* poundsEaten, string* elephantNames, int SIZE) {
    cout << "Enter the name and how many pounds of food each elephant ate last month.\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "ELEPHANT " << i + 1 << ":\n";
        cout << "     NAME - ";
        getline(cin, elephantNames[i]);
        cout << "     FOOD AMOUNT - ";
        cin >> poundsEaten[i];
        cout << "\n";
        cin.ignore();
    }
}

void getStats(float poundsEaten[], int SIZE, float &foodTotal, float &foodAverage, int &mostFoodEaten) {
    int mostFoodEatenCheck = 0;
    //Get total amount of food eaten by all elephants in array
    for (int i = 0; i < SIZE; i++) {
    foodTotal += poundsEaten[i];
    }

    //Average number of food eaten per elephant
    foodAverage = (foodTotal / static_cast<float>(SIZE));

    //Get index of which elepant ate the most
    mostFoodEatenCheck = poundsEaten[0];
    for (int i = 0; i < SIZE; i++) {
        if (poundsEaten[i] > mostFoodEatenCheck) {
            mostFoodEaten = i;
        }  
    }

}
/*
    int max = 0;
    int maxVal = 0;
    max = itemPrice[0];
    for (int i = 0; i < NUM_ITEMS; i++) {
        if (itemPrice[i] > max) {
            maxVal = i;
        }
    }
*/
