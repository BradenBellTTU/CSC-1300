#include "prog4.h"


int enterHeroes(int maxHeroes, int numHeroes, Heroes* heroArray) {
    int userIntChoice, count = 1;
    char userCharChoice;
    ifstream inFileStream;
    string tempString, heroFileName;
    bool run = true;


    //Check to verify the heroes array isn't maxed out
    if (maxHeroes <= numHeroes) {
        cout << "Sorry, your complex can only hold " << maxHeroes << " heroes.\n";
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
            cout << "FILE NAME: ";
            cin >> heroFileName;
            
            //Try to open file
            inFileStream.open(heroFileName);

            //Verify that the user input was valid and the file opens correctly.
            //If not, then ask user for dir name and try again
            while(cin.fail() || !(inFileStream.is_open())) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input or file not found, please try again.\n";
                cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)";
                cout << "FILE NAME: ";
                cin >> heroFileName;
                inFileStream.open(heroFileName);
    }
            
            while(getline(inFileStream, tempString, '#') && run == true) {
                switch(count) {
                    case 1:
                        heroArray[numHeroes].name = tempString;
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 2:
                        heroArray[numHeroes].description = tempString;
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 3:
                        if (tempString == "0") {
                            heroArray[numHeroes].dangerous = false;
                            //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        }

                        else if (tempString == "1") {
                            heroArray[numHeroes].dangerous = true;
                            //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        }

                        count += 1;
                        break;

                    case 4:
                        heroArray[numHeroes].rent.cost = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 5:
                        heroArray[numHeroes].rent.damage_cost = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count += 1;
                        break;

                    case 6:
                        heroArray[numHeroes].rent.years = stof(tempString);
                        //cout << "Adding " << tempString << " to heroArray[" << numHeroes << "]\n";
                        count = 1;
                        numHeroes += 1;
                        if (numHeroes >= maxHeroes)
                            run = false;
                        break;

                    default:
                        cout << "Error in importing file data switch statement!\n";
                        cout << "Function return default\n";
                        return numHeroes;
                        break;
                }
            }

            cout << numHeroes << " hero(es) from " << heroFileName << " have been added to your condo complex.\n";

            inFileStream.close();
            //cout << "File closed\n";
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

    return numHeroes;
}






int deleteHeroes(int numHeroes, Heroes* heroArray) {
    string removeHero;

    cout << "The following is a list of heroes living in your condo complex:\n";
    for (int i = 0; i < numHeroes; i++) {
        cout << heroArray[i].name << '\n';
    }

    cout << "Which hero are you kicking out of your complex?\n";
    cout << "SUPERHERO NAME: ";
    getline(cin, removeHero);
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again.\n\n";
        cout << "Which hero are you kicking out of your complex?\n";
        cout << "SUPERHERO NAME: ";
        getline(cin, removeHero);
    }
/*
    if(moveArrayElements(removeHero, numHeroes, heroArray)) {
        cout << "You have removed " << removeHero << ".\n";
        numHeroes -= 1;
    }
    
    else 
        cout << "Sorry a hero by the name " << removeHero << " could not be found.\n";
*/
    return numHeroes;

}


bool moveArrayElements(string, int, Heroes*);




void saveToFile(int numHero, Heroes* heroArray) {
    string exportFileName;
    ofstream outFileStream;

    cin.ignore();
    cout << "Type name of file: "; 
    getline(cin, exportFileName);
    
    outFileStream.open(exportFileName);

    while(cin.fail() || !(outFileStream.is_open())) {
    cin.clear();
    cin.ignore(255, '\n');
    cout << "Unexpected input or file not found, please try again.\n";
    cout << "Type name of file:  ";
    cin >> exportFileName;
    outFileStream.open(exportFileName);
    }

    for (int i=0; i < numHero; i++) {
        outFileStream << heroArray[i].name << "#";
        outFileStream << heroArray[i].description << "#";
        outFileStream << heroArray[i].dangerous << "#";
        outFileStream << heroArray[i].rent.cost << "#";
        outFileStream << heroArray[i].rent.damage_cost << "#";
        outFileStream << heroArray[i].rent.years << "#";
    }
    outFileStream.close();
    cout << "\nYour superheroes were successfully saved to " << exportFileName << " file.\n";
}


void printHeroes(int numHeroes, Heroes* heroArray) {
    string line(25, '-');
    string tabs(2, '\t');

    for (int i = 0; i < numHeroes; i++) {
        cout << '\n' << line << "SUPERHERO " << i + 1 << line << '\n';
        cout << "NAME: " << tabs << heroArray[i].name << '\n';
        cout << "DESCRIPTION:\n";
        cout << heroArray[i].description << "\n\n";
        cout << "DANGEROUS?" << tabs;
        if (heroArray[i].dangerous)
            cout << "Yes\n";
        else
            cout << "No\n";

        cout << "RENT PRICE:" << tabs << "$ " << heroArray[i].rent.cost << '\n';
        cout << "DAMAGE COST:" << tabs << "$ " << heroArray[i].rent.damage_cost << '\n';
        cout << "YEARS:" << tabs << '\t' << heroArray[i].rent.years << '\n';
    }
    
}

void printRentDetails(int numHeroes, Heroes* heroArray) {
    string tabs(2, '\t');
    string line(25, '-');
    float rentTotal = 0, damageTotal = 0;
    cout << "RENT DETAILS OF EACH HERO:\n\n";
    cout << "SUPERHERO" << tabs << "MONTHLY RENT" << tabs << "DAMAGE COST\n";
    cout <<	setprecision(2) << fixed << showpoint; 

    for (int i = 0; i < numHeroes; i++) {

        cout << heroArray[i].name;
        if ((heroArray[i].name).length() < 8)
            cout << "\t\t\t";
        else
            cout << "\t\t";

        cout << '$' << heroArray[i].rent.cost << setw(19) << '$' << heroArray[i].rent.damage_cost << '\n';
        rentTotal += heroArray[i].rent.cost;
        damageTotal += heroArray[i].rent.damage_cost;
    }

    cout << line << "\n\n";
    cout << "TOTALS: " << tabs << '$'<< rentTotal << tabs << " $" << damageTotal << '\n';

}