#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    

    //Variables
    bool playGame;
    int guess, guessCount;

    //Seed RNG with time
    srand(time(0));

    //RNG Settings, defualt it is set to generate an int 1-100 inclusive.
    int UPPER_LIMIT = 100, LOWER_LIMIT = 1;
    int randNum = (rand() % (UPPER_LIMIT + 1) + LOWER_LIMIT);


    do {
        while(guess != randNum) {
            cout << "Enter your guess: ";
            cin >> guess;
            while (cin.fail() || !(guess <= UPPER_LIMIT && guess >= LOWER_LIMIT) ) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "You entered an invalid number. Choose between " << UPPER_LIMIT << " and " << LOWER_LIMIT << "\n";
                cin >> guess;
            }

            if (guess > randNum)
                cout << "Too high\n";

            else if (guess < randNum)
                cout << "Too low.\n";
            
            guessCount++;
        }

        
        cout << "Would you like to play again? (y/n) ";
        cin >> playGame;


    }
    while(playGame == 'y');
}

