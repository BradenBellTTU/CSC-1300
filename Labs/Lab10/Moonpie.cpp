#include "Moonpie.h"

int main() {
    int* arr = NULL;
    int numDays = 0, highest = 0, lowest = 0, total = 0;
    float average = 0;
    string line(25, '-');

    cout << "How many days did Jane steal moon pies?\n";
    cin >> numDays;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid input, please try again.\n";
        cout << "How many days did Jane steal moon pies?\n";
        cin >> numDays;
    }

    arr = makeArray(numDays);

    enterStolenMoonPies(arr, numDays);

    total = totalMoonPies(arr, numDays);

    average = averageMoonPies(arr, numDays, total);
    
    highest = highestMoonPies(arr, numDays);

    lowest = lowestMoonPies(arr, numDays);


    cout << line << "RESULTS" << line << '\n';
    cout << "TOTAL # MOON PIES STOLEN: " << total << '\n';
    cout << "AVERAGE # MOON PIES STOLEN PER DAY: " << average << '\n';
    cout << "MOST # MOON PIES STOLEN IN ONE DAY: " << highest << '\n';
    cout << "LEAST # MOON PIES STOLEN IN ONE DAY: " << lowest << '\n';
    cout << line << "-------" << line << '\n';

    delete [] arr;

    return 0;
}