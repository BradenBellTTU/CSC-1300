#include "babell45_prog4.h"

/*
+--------------------------------------------------------------------------+
| enterHeroes() | Parameters: maxHeroes, numHeroes, heroArray | type: int  |
|--------------------------------------------------------------------------|
| Desc: This function allows the user to dynamically populate the heroArray|
| by either importing data from a file or via manual entry.                |
+--------------------------------------------------------------------------+
*/
int enterHeroes(int maxHeroes, int numHeroes, Heroes* heroArray) {
    //Vars
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

    //Submenu
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

    //Switch statement based on user choice in the submenu
    switch (userIntChoice) {
        //Executes if user chose to import data from a file
        case 1:
            //Get file name from user
            cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)\n";
            cout << "FILE NAME: ";
            cin >> heroFileName;
            
            //Try to open file
            inFileStream.open(heroFileName);

            //Verify that the user input was valid and the file opens correctly.
            //If not, then ask user for file name and try again
            while(cin.fail() || !(inFileStream.is_open())) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input or file not found, please try again.\n\n";
                cout << "What is the name of the file with your list of superheroes? (ex: filename.txt)\n";
                cout << "FILE NAME: ";
                cin >> heroFileName;
                inFileStream.open(heroFileName);
    }

            //Main while loop to extract data from a file. Each case has a commented out debug statement.
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

                    //If the file is correct in format the function should never wind up here, but just in case:
                    default:
                        cout << "Error in importing file data switch statement!\n";
                        cout << "Function will return default\n";
                        return numHeroes;
                        break;
                }
            }
            
            //Let user know file import was successful
            cout << numHeroes << " hero(es) from " << heroFileName << " have been added to your condo complex.\n";
            //Close file
            inFileStream.close();

            //Debug statement
            //cout << "File closed\n";
            break;
        
        //Executes if user chose to manually enter data
        case 2:
            for(int i = numHeroes; i < maxHeroes; i++) {
                //Get hero name
                cout << "SUPERHERO NAME: ";
                cin.ignore();
                getline(cin, heroArray[i].name);

                //Get hero description
                cout << "DESCRIPTION: ";
                getline(cin, heroArray[i].description);

                //Get danger info
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
                        cout << "heroArray[" << i << "] danger data defaulting to false\n";
                        heroArray[i].dangerous = false;
                        break;
                }

                //Get monthly rent
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

                //Get damage cost
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

                //Get years data
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

                //Tell user the hero has been added
                cout << "The " << heroArray[i].name << " has been added.\n";
                numHeroes += 1;

                //Ask if the user wants to continue manual entry
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
        
        //The function should never end up here, but just in case:
        default:
            cout << "Error making user choice in enterHeroes function.\n";
            cout << "Function returning defaults.\n";
            return numHeroes;
            break;
    }
    return numHeroes;
}



/*
+---------------------------------------------------------------------------------------------------------------+
| deleteHeroes() | Parameters: numHeroes, heroArray | type: int | Requires moveArrayElements() function to work |
|---------------------------------------------------------------------------------------------------------------|
| Desc: Allows the user to delete heroes from the dynamic array                                                 |
+---------------------------------------------------------------------------------------------------------------+
*/
int deleteHeroes(int numHeroes, Heroes* heroArray) {
    string removeHero;

    //Shows user who is living in the condo complex currently
    cout << "The following is a list of heroes living in your condo complex:\n";
    for (int i = 0; i < numHeroes; i++) {
        cout << heroArray[i].name << '\n';
    }

    //Asks user which hero they would like to delete
    cout << "Which hero are you kicking out of your complex?\n";
    cout << "SUPERHERO NAME: ";
    cin.ignore();
    getline(cin, removeHero);
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again.\n\n";
        cout << "Which hero are you kicking out of your complex?\n";
        cout << "SUPERHERO NAME: ";
        getline(cin, removeHero);
    }

    //Remove the hero and let user know if it was successful or not
    if(moveArrayElements(removeHero, numHeroes, heroArray)) {
        cout << "You have removed " << removeHero << ".\n";
        numHeroes -= 1;
    }
    
    else 
        cout << "Sorry a hero by the name " << removeHero << " could not be found.\n";
    return numHeroes;
}



/*
+------------------------------------------------------------------------------------+
| moveArrayElements() | Parameters: heroName, numHeroes, heroArray | Type: bool      |
|------------------------------------------------------------------------------------+
| Desc: Is used in the deleteHeroes() function to manipulate the array and actually  |
| delete the hero data the user selects. It then shifts the array to fill in the gap |
+------------------------------------------------------------------------------------+
*/
bool moveArrayElements(string heroName, int numHeroes, Heroes* heroArray) {
    for (int i = 0; i < numHeroes; i++) {
        if (heroName == heroArray[i].name) {
            for (int j = i; j < numHeroes; j++) {
                heroArray[j].name = heroArray[j+1].name;
                heroArray[j].description = heroArray[j+1].description;
                heroArray[j].dangerous = heroArray[j+1].dangerous;
                heroArray[j].rent.cost = heroArray[j+1].rent.cost;
                heroArray[j].rent.damage_cost = heroArray[j+1].rent.damage_cost;
                heroArray[j].rent.years = heroArray[j+1].rent.years;
            }
            return true;
        }
    }
    return false;
}



/*
+-------------------------------------------------------------+
| saveToFile() | Parameters: numHero, heroArray | Type: void  |
|-------------------------------------------------------------|
| Desc: Exports data kept in the heroArray to a file that the |
| user specifies.                                             |
+-------------------------------------------------------------+
*/
void saveToFile(int numHero, Heroes* heroArray) {
    //Vars
    string exportFileName;
    ofstream outFileStream;

    //Get name of file user wants to create/export data to
    cin.ignore();
    cout << "Type name of file: "; 
    getline(cin, exportFileName);
    
    //Open file and verify it opened correctly.
    //Since we're exporting data, the file stream should never ever fail to open under normal circumstances, but just in case:
    outFileStream.open(exportFileName);
    while(cin.fail() || !(outFileStream.is_open())) {
    cin.clear();
    cin.ignore(255, '\n');
    cout << "Unexpected input or file not found, please try again.\n";
    cout << "Type name of file:  ";
    cin >> exportFileName;
    outFileStream.open(exportFileName);
    }

    //Export data from array to the file stream
    for (int i=0; i < numHero; i++) {
        outFileStream << heroArray[i].name << "#";
        outFileStream << heroArray[i].description << "#";
        outFileStream << heroArray[i].dangerous << "#";
        outFileStream << heroArray[i].rent.cost << "#";
        outFileStream << heroArray[i].rent.damage_cost << "#";
        outFileStream << heroArray[i].rent.years << "#";
    }

    //Close file and tell user the export was successful
    outFileStream.close();
    cout << "\nYour superheroes were successfully saved to " << exportFileName << " file.\n";
}


/*
+----------------------------------------------------------------+
| printHeroes() | Paremeters: numHeroes, heroArray | Type: void  |
|----------------------------------------------------------------|
| Desc: Displays all the current data stored in the heroArray to |
| the console.                                                   |
+----------------------------------------------------------------+
*/
void printHeroes(int numHeroes, Heroes* heroArray) {
    //Vars
    string line(25, '-');
    string tabs(2, '\t');

    //Display info stored in heroArray to console
    for (int i = 0; i < numHeroes; i++) {
        cout << '\n' << line << "SUPERHERO " << i + 1 << line << '\n';
        cout << "NAME: " << tabs << heroArray[i].name << '\n';
        cout << "DESCRIPTION:\n";
        cout << heroArray[i].description << "\n\n";
        cout << "DANGEROUS?" << tabs;

        //Since the file data contains a '1' or '0' for danger data, an if statement is used
        if (heroArray[i].dangerous)
            cout << "Yes\n";
        else
            cout << "No\n";

        cout << "RENT PRICE:" << tabs << "$ " << heroArray[i].rent.cost << '\n';
        cout << "DAMAGE COST:" << tabs << "$ " << heroArray[i].rent.damage_cost << '\n';
        cout << "YEARS:" << tabs << '\t' << heroArray[i].rent.years << '\n';
    }
}

/*
+--------------------------------------------------------------------+
| printRentDetails() | Parameters: numHeroes, heroArray | Type: void |
|--------------------------------------------------------------------|
| Desc: Displays all the current rent data stored in numHeroes while |
| adding the total monthly rent and monthly damage cost of all heroes|
+--------------------------------------------------------------------+
*/
void printRentDetails(int numHeroes, Heroes* heroArray) {
    //Vars
    string tabs(2, '\t');
    string line(100, '-');
    float rentTotal = 0, damageTotal = 0;
    cout << "RENT DETAILS OF EACH HERO:\n\n";
    cout << "SUPERHERO" << tabs << "MONTHLY RENT" << tabs << "DAMAGE COST\n";
    cout <<	setprecision(2) << fixed << showpoint; 

    //Display rent data in heroArray
    for(int i = 0; i < numHeroes; i++){
        cout << heroArray[i].name;
        if((heroArray[i].name).length() < 8)
            cout << "\t";
        cout << tabs << "$" << heroArray[i].rent.cost;
        if(to_string(heroArray[i].rent.cost).length() < 11)
            cout << "\t";
        cout << tabs << "$" << heroArray[i].rent.damage_cost << endl;
        rentTotal += heroArray[i].rent.cost;
        damageTotal += heroArray[i].rent.damage_cost;
    }

    //Display totals vars
    cout << line << "\n\n";
    cout << "TOTALS: " << tabs << '$'<< rentTotal << tabs << "$" << damageTotal << '\n';

}