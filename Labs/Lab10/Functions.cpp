#include <iostream>
#include <string>
using namespace std;


int* makeArray(int numDays) {
    int* arr;
    arr = new int[numDays];
    return arr;
}

void enterStolenMoonPies(int* arr, int numDays) {
    int total = 0;
    float average = 0;

    cout << "Enter the number of moon pies stolen each day.\n";
    //Get data from user and store it in arr
    for (int i = 0; i < numDays; i++) {
        cout << "DAY " << i + 1 << ": ";
        cin >> *(arr + i);
    }
}

int highestMoonPies(int* arr, int numDays) {
    int i, max;
    max = *(arr);

    for (i = 1; i < numDays; i++) {
        if (max < *(arr + i))
            max = *(arr + i);
    }

    return max;
}

int lowestMoonPies(int* arr, int numDays) {
    int i, min;
    min = *(arr);

    for (i = 1; i < numDays; i++) {
        if (min > *(arr + i))
            min = *(arr + i);
    }

    return min;
}

int totalMoonPies(int* arr, int numDays) {
    int total = 0;
    //Iterate through arr and add the sum of all its values to total
    for (int i = 0; i < numDays; i++) {
        total += (*(arr + i));
    }

    return total;
}

float averageMoonPies(int* arr, int numDays, int total) {
    float average = 0;
    //Calculate average of the array, store it in 'average,' and return 'average'
    average = (static_cast<float>(total) / static_cast<float>(numDays));
    return average;
}

