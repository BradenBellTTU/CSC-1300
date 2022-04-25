/*
+----------------------------------------------------------------+
| Braden Bell | Program #4 - Hero Condo Manager | April 25, 2022 |
+----------------------------------------------------------------+
| Required Files: babell45_functions.cpp & babell45_prog4.h      |
+----------------------------------------------------------------+
*/

#include "babell45_prog4.h"

int main() {
    //Vars
    int maxHeroes = 0, numHeroes = 0, userChoice = 0;
    char userChar = 'n';

    //Establish size of dynamic array by asking user
    cout << "How many superheros can live in your condo complex? ";
    cin >> maxHeroes;
    while(cin.fail() || (maxHeroes < 0)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input. Please input a positve integer.\n";
        cout << "How many superheros can live in your condo complex? ";
        cin >> maxHeroes;
    }

    //Dynamicall allocate heroArray
    Heroes* heroArray;
    heroArray = new Heroes[maxHeroes];

    //Main menu loop
    while(true) {
        //Display menu
        cout << '\n';
        cout << "What would you like to do?\n";
        cout << "\t\t1.  Enter some superheros\n";
        cout << "\t\t2.  Delete a superhero\n";
        cout << "\t\t3.  Print all superheros\n";
        cout << "\t\t4.  Print rent details\n";
        cout << "\t\t5.  End program\n";
        cout << "\t\tEnter an option 1-5\n";
        cout << "CHOICE: ";

        //Get user input with validation
        cin >> userChoice;
        while(cin.fail() || !((userChoice >= 1) && (userChoice <= 5)) ) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Unexpected input. Please enter an integer between 1-5.\n";
            cout << "CHOICE: ";
            cin >> userChoice;
        }

        //Switch statement based off of user's choice
        switch (userChoice) {
            //Menu option 1 - populate hero array
            case 1:
                numHeroes = enterHeroes(maxHeroes, numHeroes, heroArray);
                break;

            //Menu option 2 - delete a hero from the array
            case 2:
                numHeroes = deleteHeroes(numHeroes, heroArray);
                break;

            //Menu option 3 - print hero info
            case 3:
                printHeroes(numHeroes, heroArray);
                break;

            //Menu option 4 - print rent details
            case 4:
                printRentDetails(numHeroes, heroArray);
                break;

            //Menu option 5 - Exit
            case 5:
                //File export menu
                cout << "Would you like to save your superheros list to a file? (y/n) ";
                cin >> userChar;
                while(cin.fail() || !( (tolower(userChar) == 'y') || (tolower(userChar) == 'n') )) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "Would you like to save your superheros list to a file? (y/n) ";
                    cin >> userChar;
                }

                //Switch statement based off of user's choice
                switch(tolower(userChar)) {
                    //Export to file
                    case 'y':
                        saveToFile(numHeroes, heroArray);
                        cout << "Goodbye.\n";
                        //Memory cleanup
                        delete [] heroArray;
                        return 0;
                        break;
                    
                    //Exit program
                    case 'n':
                        cout << "Goodbye.\n";
                        //Memory cleanup
                        delete [] heroArray;
                        return 0;
                        break;

                    //Program should never end up here, but in case it does:
                    default:
                        cout << "Error getting user input in second switch statement. Exiting program.\n";
                        return 1;
                        break;
                }
                break;

            //Program should never end up here, but in case it does:
            default:
                cout << "Error getting user input in 1st switch statement. Exiting program.\n";
                return 1;
                break;
        }
    }

    //main() function should never wind up here, but in case it somehow does:
    delete [] heroArray;
    cout << "Error in main loop. Exiting program\n";
    return 1;
}