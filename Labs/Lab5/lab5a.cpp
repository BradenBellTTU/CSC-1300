#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char playGame;
    do {
        //Variables
        int guess, guessCount;

        //Seed RNG with time
        srand(time(0));

        //RNG Settings, defualt it is set to generate an int 1-100 inclusive.
        int UPPER_LIMIT = 100, LOWER_LIMIT = 1;
        int randNum = (rand() % (UPPER_LIMIT + 1) + LOWER_LIMIT);
        cout << randNum << "\n";


        //Guess loop
        while(guess != randNum) {
            cout << "Enter your guess: ";
            cin >> guess;

            //Input validation for guess
            while (cin.fail() || !(guess <= UPPER_LIMIT && guess >= LOWER_LIMIT) ) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "You entered an invalid number. Choose between " << UPPER_LIMIT << " and " << LOWER_LIMIT << "\n";
                cin >> guess;
            }

            //Tell user if they guessed too high or too low
            if (guess > randNum)
                cout << "Too high.\n\n";

            else if (guess < randNum)
                cout << "Too low.\n\n";
            
            guessCount++;
        }

        //Display guess count
        if (guessCount == 1)
            cout << "Amazing! You got it in " << guessCount << "try!\n";
        else
            cout << "Correct! You got it in " << guessCount << " tries!\n";


        //Ask user if they would like to play again
        cout << "Would you like to play again? (y/n) ";
        cin >> playGame;
        
        //Input validation for playGame
        while (cin.fail() || (playGame != 'n' && playGame != 'y') ) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Invalid input. You must enter a 'y' or a 'n'.\n";
            cin >> playGame;
        }

    }

    while(playGame == 'y');
    return 0;
}

