#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    

    //Variables
    bool playGame;
    int guess;

    //Seed RNG with time
    srand(time(0));

    //RNG Settings, defualt it is set to generate an int 1-100 inclusive.
    int UPPER_LIMIT = 100, LOWER_LIMIT = 1;
    int randNum = (rand() % (UPPER_LIMIT + 1) + LOWER_LIMIT);


    do {
        cout << "Enter your guess: ";
        cin >> guess;
        while (cin.fail() || !(guess <= UPPER_LIMIT && guess >= LOWER_LIMIT) ) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "You entered an invalid number. Choose between " << UPPER_LIMIT << " and " << LOWER_LIMIT "\n";
            cin >> guess;
        }

    }
    while(playGame == true);
}

