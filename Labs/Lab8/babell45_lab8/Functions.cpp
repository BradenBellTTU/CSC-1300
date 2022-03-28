//For some reason, my compiler still complains when I don't include these libraries and establish namespace std in every file.
#include <iostream>
#include <string>
using namespace std;

//getElephantData takes poundsEaten, elephantNames, and SIZE as input and asks the user for data to fill the 2 arrays with.
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

/*getStats takes poundsEaten, SIZE, foodTotal, foodAverage, and mostFoodEaten as inputs and calculates the total pounds of food eaten by each
elephant, average amount eaten by each elephant, and finds out which elephant ate the most by iterating through the arrays with for loops*/
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

