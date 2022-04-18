#include <iostream>
#include <string>
using namespace std;

/*
                    -=makeArray Function=-
Type: int*
Desc: Dynamically allocates an array based off of user input
*/
int* makeArray(int size) {
    int* arr;
    arr = new int[size];
    return arr;
}

/*
                -=enterStolenMoonPies Function=-
Type: void
Desc. Populates the arr array
*/
                
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

/*
                -=highestMoonPies Function=-
Type: int
Desc: Finds the highest value in the arr array and returns it
*/
int highestMoonPies(int* arr, int numDays) {
    int i, max;
    max = *(arr);

    for (i = 1; i < numDays; i++) {
        if (max < *(arr + i))
            max = *(arr + i);
    }

    return max;
}

/*
                -=lowestMoonPies Function=-
Type: int
Desc: Finds the lowest value in the arr array and returns it
*/
int lowestMoonPies(int* arr, int numDays) {
    int i, min;
    min = *(arr);

    for (i = 1; i < numDays; i++) {
        if (min > *(arr + i))
            min = *(arr + i);
    }

    return min;
}

/*
                -=totalMoonPies Function=-
Type: int
Desc: Calculates sum of all values in arr
*/
int totalMoonPies(int* arr, int numDays) {
    int total = 0;
    //Iterate through arr and add the sum of all its values to total
    for (int i = 0; i < numDays; i++) {
        total += (*(arr + i));
    }

    return total;
}

/*
                -=averageMoonPies Function=-
Type: float
Desc: calculates average number of moon pies stolen per day
*/
float averageMoonPies(int* arr, int numDays, int total) {
    float average = 0;
    //Calculate average of the array, store it in 'average,' and return 'average'
    average = (static_cast<float>(total) / static_cast<float>(numDays));
    return average;
}

