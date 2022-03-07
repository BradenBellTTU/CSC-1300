#include <iostream>
using namespace std;

//Prototype functions
int DisplayCoolMessage(int);
int DisplayMenuGetChoice();
void GoblinSickDays();

//Main
int main() {
    //Variables
    int coolMessageCount;
    bool quit = false;

    //Call appropriate function depending on what DisplayMenuGetFunction() returns (1-3) as long as quit = false
    do {
        switch(DisplayMenuGetChoice()){

            case 1:
                GoblinSickDays();
                break;
            
            case 2:
                coolMessageCount = DisplayCoolMessage(coolMessageCount);
                break;
            
            case 3:
                quit = true;
                break;
            
            default:
                cout << "Unexpected Error. Exiting program.\n";
                return 1;
        }
    }
    while(!quit);

    //Close message
    cout << "You chose to display the cool message " << coolMessageCount << " time(s)!\n";
    cout << "Bye!\n\n";
    return 0;
}


//-==FUNCTION DEFINITIONS==-

/*
+--------------------------------------------------------------------+
| DipslayMenuGetChoice | Argument: none |                            |
|--------------------------------------------------------------------|
| Displays the main menu and returns an int 1-3 depending on the     |
| user's choice of options in the main menu                          |
+--------------------------------------------------------------------+ */
int DisplayMenuGetChoice() {
    //Variables
    int userChoice;

    //Display menu
    cout << "\n\nWELCOME TO GRINGOTTT's BANK!\n";
    cout << "Please choose from the following options:\n";
    cout << "1 - Enter Goblin Sick Days\n";
    cout << "2 - Display Something Cool\n";
    cout << "3 - End the Program\n";
    cout << "CHOICE: ";

    //Get user choice
    cin >> userChoice;
    cout << "\n\n";

    //Input validation
    while (cin.fail() || !(userChoice >= 1 && userChoice <= 3)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid choice. Please choose 1-3.\n";
        cout << "Please choose from the following options:\n";
        cout << "1 - Enter Goblin Sick Days\n";
        cout << "2 - Display Something Cool\n";
        cout << "3 - End the Program\n";
        cout << "CHOICE: ";
        cin >> userChoice;
    }
    return userChoice;
}


/*
+--------------------------------------------------------------------+
| GoblinSickDays |  No arguments |                                   |
|--------------------------------------------------------------------|                          
| Asks the user how many Goblin tellers there are and their          |
| sick days. It then displays the total number of sick days taken    |
| by all Goblin tellers over the past threee years.                  |
+--------------------------------------------------------------------+ */
void GoblinSickDays() {
    int numGoblinTellers, userSickDays = 0, totalSickDays = 0;
    const int NUM_YEARS = 3;
    cout << "How many Goblin tellers worked at Gringotts during each of the last three years?\n";
    cin >> numGoblinTellers;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input. Please try again.\n;";
        cout << "How many Goblin tellers worked at Gringotts during each of the last three years?\n";
        cin >> numGoblinTellers;
    }

    //Nested for loop to calculate sick days
    for (int i = 1; i <= numGoblinTellers; i++) {
        for (int j = 1; j <= NUM_YEARS; j++) {
            cout << "How many sick days was Goblin " << i << " out for, duing year " << j << "? ";
            cin >> userSickDays;
            while (cin.fail()) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "Unexpected input. Please try again.";
                cout << "How many sick days was Goblin " << i << " out for, duing year " << j << "? ";
                cin >> userSickDays;
            }
            totalSickDays += userSickDays;
        }
    }

    //Display total sick day message
    cout << "The " << numGoblinTellers << " Goblins were out sick for a total of " << totalSickDays << " days during the last 3 years";

}


/*
+--------------------------------------------------------------------+
| DisplayCoolMessage | Argument: coolMessageCount |                  |
|--------------------------------------------------------------------|
| Displays a cool message and keeps track of how many times it has   |
| been displayed                                                     |
+--------------------------------------------------------------------+ */
int DisplayCoolMessage(int coolMessageCount) {
    cout << "\n\n";
    cout << " /$$$$$$$$ /$$   /$$ /$$$$$$$$        /$$$$$$   /$$$$$$  /$$   /$$ /$$$$$$$$       /$$$$$$  /$$$$$$         /$$$$$$        /$$       /$$$$$$ /$$$$$$$$\n";
    cout << "|__  $$__/| $$  | $$| $$_____/       /$$__  $$ /$$__  $$| $$  /$$/| $$_____/      |_  $$_/ /$$__  $$       /$$__  $$      | $$      |_  $$_/| $$_____/\n";
    cout << "   | $$   | $$  | $$| $$            | $$  \\__/| $$  \\ $$| $$ /$$/ | $$              | $$  | $$  \\__/      | $$  \\ $$      | $$        | $$  | $$      \n";
    cout << "   | $$   | $$__  $$| $$__/         | $$      | $$__  $$| $$  $$  | $$__/           | $$   \\____  $$      | $$__  $$      | $$        | $$  | $$__/   \n";
    cout << "   | $$   | $$  | $$| $$            | $$    $$| $$  | $$| $$\\  $$ | $$              | $$   /$$  \\ $$      | $$  | $$      | $$        | $$  | $$      \n";
    cout << "   | $$   | $$  | $$| $$$$$$$$      |  $$$$$$/| $$  | $$| $$ \\  $$| $$$$$$$$       /$$$$$$|  $$$$$$/      | $$  | $$      | $$$$$$$$ /$$$$$$| $$$$$$$$\n";
    cout << "   |__/   |__/  |__/|________/       \\______/ |__/  |__/|__/  \\__/|________/      |______/ \\______/       |__/  |__/      |________/|______/|________/\n";
    coolMessageCount++;
    return coolMessageCount;
}