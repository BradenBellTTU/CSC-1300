#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool displayMenuGetChoice();
int randomIntGenerator(int, int);

int main() {
    //Seed RNG
    srand(time(0));

    //Variables
    bool playGame;

    string personOneLike, personTwoLike, personOneHate, locationOneLike, locationTwoLike, locationOneHate, 
    awesomeJobOne, awesomeJobTwo, worstJobOne, companyOneLike, companyTwoLike, companyOneHate, carOneLike, 
    carTwoLike, carOneHate, houseType, marriedAdjective, spouseName, numChildren, houseLocation, jobTitle, yearlySalary,
    carModel;

    int numOne, numTwo, numThree, bigNumOne, bigNumTwo, bigNumThree;


    do {
        playGame = displayMenuGetChoice();
        if (!playGame)
            return 0;
        
        //Begin questions

        //People questions
        cout << "You chose to play MASH!\n\n";
        cout << "Enter in one person you like: ";
        cin.ignore();
        getline(cin, personOneLike);
        cout << "\nEnter in another person you like: ";
        getline(cin, personTwoLike);
        cout << "\nEnter in a person you hate: ";
        getline(cin, personOneHate);

        //Get three numbers, with input validaiton
        cout << "\nEnter three numbers between 1 and 100, seperated by a space.\n";
        cin >> numOne >> numTwo >> numThree;
        while (cin.fail() || !( ( (numOne <= 100) && (numOne >= 1) && (numTwo <= 100) && (numTwo >= 1) && (numThree <= 100) && (numThree >= 1) ) ) ) {
            cin.clear();
            cin.ignore(255, '\n');
            if (!(numOne <= 100 && numOne >= 1)) {
               cout << "\nThe first number you entered was invalid.\n";
               cout << "Enter a number between 1 and 100.\n"; 
               cin >> numOne;
            }

            if (!(numTwo <= 100 && numTwo >= 1)) {
                cout << "\nThe second number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> numTwo;
            }

            if (!(numThree <= 100 && numThree >= 1)) {
                cout << "\nThe third number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> numThree;
            }
        }

        //City questions
        cout << "\nEnter in one city, state you like: ";
        cin.ignore();
        getline(cin, locationOneLike);
        cout << "\nEnter another city, state you like: ";
        getline(cin, locationTwoLike);
        cout << "\nEnter in one city, state you hate: ";
        getline(cin, locationOneHate);

        //Job questions
        cout << "\nEnter an awesome job title: ";
        getline(cin, awesomeJobOne);
        cout << "\nEnter another awesome job title: ";
        getline(cin, awesomeJobTwo);
        cout << "\nEnter the worst job title ever: ";
        getline(cin, worstJobOne);

        //Company & restaurant questions
        cout << "\nEnter a company or restaurant you like: ";
        getline(cin, companyOneLike);
        cout << "\nEnter another company or restaurant you like: ";
        getline(cin, companyTwoLike);
        cout << "\nEnter a company or restaurant you hate: ";
        getline(cin, companyOneHate);

        //Three big numbers with input validation
        cout << "\nEnter three numbers between 10,000 and 500,000, seperated by a space.\n";
        cin >> bigNumOne >> bigNumTwo >> bigNumThree;
        while (cin.fail() || !( ( (bigNumOne <= 500000) && (bigNumOne >= 10000) && (bigNumTwo <= 500000) && (bigNumTwo >= 10000) && (bigNumThree <= 500000) && (bigNumThree >= 10000) ) ) ) {
            cin.clear();
            cin.ignore(255, '\n');
            if (!(numOne <= 500000 && numOne >= 10000)) {
               cout << "\nThe first number you entered was invalid.\n";
               cout << "Enter a number between 1 and 100.\n"; 
               cin >> numOne;
            }

            if (!(numTwo <= 500000 && numTwo >= 10000)) {
                cout << "\nThe second number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> numTwo;
            }

            if (!(numThree <= 50000 && numThree >= 10000)) {
                cout << "\nThe third number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> numThree;
            }
        }

        //Car questions
        cout << "\nEnter in a car that you like: ";
        cin.ignore();
        getline(cin, carOneLike);
        cout << "\nEnter another car that you like: ";
        getline(cin, carTwoLike);
        cout << "\nEnter a car that you hate: ";
        getline(cin, carOneHate);

        //TODO: MASH RESULTS

        //Calculate RNG

        //House


        //Print results
        cout << "****** MASH RESULTS ******\n";
        cout << "You will live in a " << houseType << ".\n";
        cout << "You will be " << marriedAdjective << " married to " << spouseName << ".\n";
        cout << "You and your spouse will have " << numChildren << " children.\n";
        cout << "";

    }
    while(playGame);
}

bool displayMenuGetChoice() {
    int userInput;

    cout << "Pick from the following menu:\n";
    cout << "1. Let's play MASH!\n";
    cout << "2. End program\n";

    cin >> userInput;
    while (cin.fail() || (userInput != 1 && userInput != 2) ) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid input. Please choose 1 or 2.\n";
        cin >> userInput;
    }

    switch (userInput) {

        case 1:
            return true;
            break;
        
        case 2:
            return false;
            break;

        default:
            cout << "Unexpected error. Exiting program.\n";
            return false;
            break;
    }

}

int randomIntGenerator(int randLower, int randUpper) {
     return ((rand() % (randUpper - randLower + 1)) + randLower);
}
