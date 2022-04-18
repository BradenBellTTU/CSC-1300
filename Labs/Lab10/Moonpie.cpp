#include "Moonpie.h"

int main() {
    //Vars
    int* arr = NULL;
    int numDays = 0, highest = 0, lowest = 0, total = 0;
    float average = 0;
    string line(25, '-');

    //Get user input
    cout << "How many days did Jane steal moon pies?\n";
    cin >> numDays;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid input, please try again.\n";
        cout << "How many days did Jane steal moon pies?\n";
        cin >> numDays;
    }

    //Make array to store data
    arr = makeArray(numDays);

    //Populate array
    enterStolenMoonPies(arr, numDays);

    //Get total number of moon pies stolen
    total = totalMoonPies(arr, numDays);

    //Get average number of moon pies stolen
    average = averageMoonPies(arr, numDays, total);
    
    //Get highest number of moon pies stolen in one day
    highest = highestMoonPies(arr, numDays);

    //Get lowest number of moon pies stolen in one day
    lowest = lowestMoonPies(arr, numDays);

    //Display results to user
    cout << line << "RESULTS" << line << '\n';
    cout << "TOTAL # MOON PIES STOLEN: " << total << '\n';
    cout << "AVERAGE # MOON PIES STOLEN PER DAY: " << average << '\n';
    cout << "MOST # MOON PIES STOLEN IN ONE DAY: " << highest << '\n';
    cout << "LEAST # MOON PIES STOLEN IN ONE DAY: " << lowest << '\n';
    cout << line << "-------" << line << '\n';

    //Delete arr array to prevent memory leaks
    delete [] arr;

    return 0;
}