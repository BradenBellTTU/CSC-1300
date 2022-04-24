#include "prog4.h"


int enterHeroes(int maxHeroes, int numHeroes, Heroes* heroArray) {
    int userIntChoice;
    char userCharChoice;
    ifstream inFileStream;
    string tempString, heroFileName;


    //Check to verify the heroes array isn't maxed out
    if (maxHeroes < numHeroes) {
        cout << "Sorry, your complex can only hold 7 heroes.\n";
        cout << "You cannot add any more!\n";
        return numHeroes;
    }


    cout << "What do you want to do?\n";
    cout << "\t\t1. Load the heroes from a file.\n";
    cout << "\t\t2. Enter a hero manually.\n";
    cout << "\t\tChoose 1 or 2.\n";
    cout << "CHOICE: ";
    cin >> userIntChoice;
    while(cin.fail() || !((userIntChoice == 1) || (userIntChoice == 2)) ) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again.\n";
        cout << "CHOICE: ";
    }

    switch (userIntChoice) {
        case 1:

            cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)\n";
            cout << "FILENAME: ";
            
            
            //Try to open file
            inFileStream.open(heroFileName);

            //Verify that the user input was valid and the file opens correctly.
            //If not, then ask user for dir name and try again
            while(cin.fail() || !(inFileStream.is_open())) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input or file not found, please try again.\n";
                cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)";
                cin >> heroFileName;
                inFileStream.open(heroFileName);
    }

            for (int i = 0; i < maxHeroes; i++) {
                
            }


            break;
        
        case 2:
            for(int i = 0; i < maxHeroes; i++) {
                cout << "SUPERHERO NAME: ";
                cin.ignore();
                getline(cin, heroArray[i].name);

                cout << "DESCRIPTION: ";
                getline(cin, heroArray[i].description);

                cout << "IS IT A DANGEROUS HERO? (y/n): ";
                cin >> userCharChoice;
                while(cin.fail() || !( (tolower(userCharChoice) == 'y') || (tolower(userCharChoice) == 'n') )) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "Would you like to save your superheros list to a file? (y/n) ";
                    cin >> userCharChoice;
                }

                switch (userCharChoice) {
                    case 'y':
                        heroArray[i].dangerous = true;
                        break;

                    case 'n':
                        heroArray[i].dangerous = false;
                        break;
                    
                    default:
                        cout << "Error in switch statement in manual hero entry.\n";
                        cout << "heroArray[" << i << "] is defaulting to false\n";
                        heroArray[i].dangerous = false;
                        break;
                }

                cout << "How much does " << heroArray[i].name << " pay for rent per month?\n";
                cout << "RENT PRICE: $";
                cin  >> heroArray[i].rent.cost;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "RENT PRICE: $";
                    cin >> heroArray[i].rent.cost;
                }

                cout << "What is the typical cost of damage " << heroArray[i].name << " has each month?\n";
                cout << "DAMAGE COST: $";
                cin >> heroArray[i].rent.damage_cost;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "DAMAGE PRICE: $";
                    cin >> heroArray[i].rent.damage_cost;
                }

                cout << "How many years has " << heroArray[i].name << " lived in your condo?\n";
                cout << "YEARS: ";
                cin >> heroArray[i].rent.years;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "YEARS: ";
                    cin >> heroArray[i].rent.years;
                }

                cout << "The " << heroArray[i].name << " has been added.\n";
                numHeroes += 1;

                cout << "Want to add more heroes? (y or n) ";
                cin >> userCharChoice;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "Unexpected input, please try again.\n";
                    cout << "YEARS: ";
                    cin >> userCharChoice;
                }

                if (userCharChoice == 'n') {
                    i = maxHeroes + 1;
                }
            }
            break;
        
        default:
            cout << "Error making user choice in enterHeroes function.\n";
            cout << "Function returning defaults.\n";
            return numHeroes;
            break;
    }

    return 0;
}

void deleteHeroes(int, Heroes*);

void moveArrayElements(string, int, Heroes*);

void printHeroes(int, Heroes*);

void printRentDetails(int, Heroes*);

void saveToFile(int, Heroes*);