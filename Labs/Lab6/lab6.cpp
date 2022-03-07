#include <iostream>
using namespace std;

int DisplayCoolMessage(int&);
int DisplayMenuGetChoice();
void GoblinSickDays();


int main() {
    int coolMessageCount = 0;
    bool quit = false;
    do {
        int coolMessageCount;
        switch(DisplayMenuGetChoice()){

            case 1:
                GoblinSickDays();
                break;
            
            case 2:
                DisplayCoolMessage(coolMessageCount);
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
    cout << "You chose to display the cool message " << coolMessageCount << " time(s)!\n";
    cout << "Bye!\n";
}

int DisplayMenuGetChoice() {
    int userChoice;

    cout << "\n\nWELCOME TO GRINGOTTT's BANK!\n";
    cout << "Please choose from the following options:\n";
    cout << "1 - Enter Goblin Sick Days\n";
    cout << "2 - Display Something Cool\n";
    cout << "3 - End the Program\n";

    cout << "CHOICE: ";
    cin >> userChoice;
    while(cin.fail() || (userChoice <= 1 && userChoice >= 3)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid choice. Please choose 1-3.\n";
        cin >> userChoice;
    }


    return userChoice;

}

/*
+--------------------------------------------------------------------+
| GoblinSickDays |  No input. | void |                               |
|--------------------------------------------------------------------|                          
| Asks the user how many Goblin tellers there are and their          |
| sick days. It then displays the total number of sick days taken    |
| by all Goblin tellers over the past threee years.                  |
+--------------------------------------------------------------------+
*/
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
            cout << totalSickDays << endl;
        }
    }

    cout << "The " << numGoblinTellers << " Goblins were out sick for a total of " << totalSickDays << " days during the last 3 years";

}

int DisplayCoolMessage(int &coolMessageCount) {
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