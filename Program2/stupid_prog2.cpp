#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Prototype functions
bool displayMenuGetChoice();
int generateRandInt(int, int);

int main() {
    //Seed RNG
    srand(time(0));

    //Variables
    bool playGame;

    string personOneLike, personTwoLike, personOneHate, locationOneLike, locationTwoLike, locationOneHate, 
    awesomeJobOne, awesomeJobTwo, worstJobOne, companyOneLike, companyTwoLike, companyOneHate, carOneLike, 
    carTwoLike, carOneHate, houseType, marriedAdjective, spouseName, houseLocation, jobLocation, jobTitle,
    carModel;

    int numOne, numTwo, numThree, bigNumOne, bigNumTwo, bigNumThree, numChildren, yearlySalary;

    //Because we are required to have a do-while, this if statement is needed to prevent the
    //program from running if the user wants to exit the program on its first run.
    //I was tempted to use while(displayMenuGetChoice()) but was afraid I would lose points.
    if(displayMenuGetChoice()){
        //MASH Game
        do {
        
            //**QUESTIONS**

            //People questions
            cout << "You chose to play MASH!\n\n";
            cout << "Enter in one person you like: ";
            cin.ignore();
            getline(cin, personOneLike);
            cout << "\nEnter in another person you like: ";
            getline(cin, personTwoLike);
            cout << "\nEnter in a person you hate: ";
            getline(cin, personOneHate);

            //Three numbers
            cout << "\nEnter three numbers between 1 and 100, seperated by a space.\n";
            cin >> numOne >> numTwo >> numThree;
            //Input validation
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

            //Three big numbers /w input validation
            cout << "\nEnter three numbers between 10,000 and 500,000, seperated by a space.\n";
            cin >> bigNumOne >> bigNumTwo >> bigNumThree;
            //Input validation
            while (cin.fail() || !( ( (bigNumOne <= 500000) && (bigNumOne >= 10000) && (bigNumTwo <= 500000) && (bigNumTwo >= 10000) && (bigNumThree <= 500000) && (bigNumThree >= 10000) ) ) ) {
                cin.clear();
                cin.ignore(255, '\n');
                if (!(bigNumOne <= 500000 && bigNumOne >= 10000)) {
                cout << "\nThe first number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n"; 
                cin >> bigNumOne;
                }

                if (!(bigNumTwo <= 500000 && bigNumTwo >= 10000)) {
                    cout << "\nThe second number you entered was invalid.\n";
                    cout << "Enter a number between 1 and 100.\n";
                    cin >> bigNumTwo;
                }

                if (!(bigNumThree <= 50000 && bigNumThree >= 10000)) {
                    cout << "\nThe third number you entered was invalid.\n";
                    cout << "Enter a number between 50,000 and 10,000.\n";
                    cin >> bigNumThree;
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



            //***CALCULATE RNG***

            //House
            switch(generateRandInt(1,4)) {
                case 1:
                    houseType = "mansion";
                    break;
                
                case 2:
                    houseType = "apartment";
                    break;

                case 3:
                    houseType = "shack";
                    break;

                case 4:
                    houseType = "house";
                    break;

                default:
                    cout << "Error calculating house RNG.\n";
                    return 0;
                    break;
            }

            //Spouse
            switch(generateRandInt(1,3)) {
                case 1:
                    marriedAdjective = "happily";
                    spouseName = personOneLike;
                    break;
                
                case 2:
                    marriedAdjective = "happily";
                    spouseName = personTwoLike;
                    break;
                
                case 3:
                    marriedAdjective = "miserably";
                    spouseName = personOneHate;
                    break;
                
                default:
                    cout << "Error calculating spouse RNG\n";
                    return 0;
                    break;
            }

            //Number of children
            switch(generateRandInt(1,3)) {
                case 1:
                    numChildren = numOne;
                    break;
                
                case 2:
                    numChildren = numTwo;
                    break;

                case 3:
                    numChildren = numThree;
                    break;
                
                default:
                    cout << "Error calculating children RNG.\n";
                    return 0;
                    break;
            }

            //House location
            switch(generateRandInt(1,3)) {
                case 1:
                    houseLocation = locationOneLike;
                    break;
                
                case 2:
                    houseLocation = locationTwoLike;
                    break;
                
                case 3:
                    houseLocation = locationOneHate;
                    break;

                default:
                    cout << "Error calculating house location RNG\n";
                    return 0;
                    break;
            }

            //Work location
            switch(generateRandInt(1,3)) {
                case 1:
                    jobLocation = companyOneLike;
                    break;
                
                case 2:
                    jobLocation = companyTwoLike;
                    break;
                
                case 3:
                    jobLocation = companyOneHate;
                    break;
                
                default:
                    cout << "Error calculating work location.\n";
                    return 0;
                    break;
            }

            //Job title
            switch(generateRandInt(1,3)) {
                case 1:
                    jobTitle = awesomeJobOne;
                    break;
                
                case 2:
                    jobTitle = awesomeJobTwo;
                    break;

                case 3:
                    jobTitle = worstJobOne;
                    break;
                
                default:
                    cout << "Error calculating job title.\n";
                    return 0;
                    break;
            }

            //Salary
            switch(generateRandInt(1,3)) {
                case 1:
                    yearlySalary = bigNumOne;
                    break;
                
                case 2:
                    yearlySalary = bigNumTwo;
                    break;
                
                case 3:
                    yearlySalary = bigNumThree;
                    break;
                
                default:
                    cout << "Error calculating salary.\n";
                    return 0;
                    break;
            }

            //Car
            switch(generateRandInt(1,3)) {
                case 1:
                    carModel = carOneLike;
                    break;
                
                case 2:
                    carModel = carTwoLike;
                    break;
                
                case 3:
                    carModel = carOneHate;
                    break;
                
                default:
                    cout << "Error calculating car.\n";
                    return 0;
                    break;
            }

            //Print results
            cout << "\n\n\n****** MASH RESULTS ******\n";
            cout << "You will live in a " << houseType << ".\n";
            cout << "You will be " << marriedAdjective << " married to " << spouseName << ".\n";
            cout << "You and your spouse will have " << numChildren << " children.\n";
            cout << "You will live in " << houseLocation << " .\n";
            cout << "You will work at " << jobLocation << " as a " << jobTitle << " making $" << yearlySalary << " a year.\n";
            cout << "You will drive a(n) " << carModel << ".\n\n\n";

        } while(displayMenuGetChoice());
        cout << "\nBye!\n";
        return 0;
    }

    else {
        cout << "\nBye!\n";
        return 0;
    }

}

//Display menu and returns true or false depending on user choice. No inputs.
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

//RNG Function. inputs: (lowest number in range, highest number in range)
int generateRandInt(int randLower, int randUpper) {
     return ((rand() % (randUpper - randLower + 1)) + randLower);
}
