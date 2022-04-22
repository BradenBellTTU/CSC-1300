#include "babell45_prog4.h"

int main() {
    //Vars
    int maxHeroes = 0, userChoice = 0;
    char userChar = 'n';


    cout << "How many superheros can live in your condo complex? ";
    cin >> maxHeroes;
    while(cin.fail() || (maxHeroes < 0)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input. Please input a positve integer.\n";
        cout << "How many superheros can live in your condo complex? ";
        cin >> maxHeroes;
    }

    cout << '\n';
    cout << "What would you like to do?\n";
    cout << setw(5) << "1.  Enter some superheros\n";
    cout << setw(5) << "2.  Delete a superhero\n";
    cout << setw(5) << "3.  Print all superheros\n";
    cout << setw(5) << "4.  Print rent details\n";
    cout << setw(5) << "5.  End program\n";
    cout << setw(5) << "Enter an option 1-5\n";
    cout << "CHOICE: ";
    cin >> userChoice;
    while(cin.fail() || !((userChoice >= 1) && (userChoice <= 5)) ) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input. Please enter an integer between 1-5.\n";
        cout << "CHOICE: ";
        cin >> userChoice;
    }

    switch (userChoice) {
        case 1:
            //enterHeroes();
            break;

        case 2:
            //deleteHero();
            break;

        case 3:
            //printHeros();
            break;

        case 4:
            //printRentDetails();
            break;

        case 5:
            cout << "Would you like to save your superheros list to a file? (y/n) ";
            cin >> userChar;
            while(cin.fail() || !( (tolower(userChar) == 'y') || (tolower(userChar) == 'n') )) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input, please try again.\n";
                cout << "Would you like to save your superheros list to a file? (y/n) ";
                cin >> userChar;
            }

            switch(tolower(userChar)) {
                case 'y':
                    //saveToFile();
                    break;
                
                case 'n':
                    cout << "Goodbye.\n";
                    return 0;
                    break;

                default:
                    cout << "Error getting user input in second switch statement. Exiting program.\n";
                    return 1;
                    break;
            }
            break;

        default:
            cout << "Error getting user input in 1st switch statement. Exiting program.\n";
            return 1;
            break;
    }

    return 0;

}