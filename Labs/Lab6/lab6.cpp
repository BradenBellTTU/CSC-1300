#include <iostream>
using namespace std;

int DisplayMenuGetChoice();
void GoblinSickDays();
int DisplayCoolMessage(int &);

int main() {
    int coolMessageCount;
    switch(DisplayMenuGetChoice()){

        case 1:
            GoblinSickDays();
            break;
        
        case 2:
            DisplayCoolMessage(coolMessageCount);
            break;
        
        case 3:
            return 0;
        
        default:
            cout << "Unexpected Error. Exiting program.\n";
            return 1;
    }
}


int DisplayMenuGetChoice() {
    int userChoice;

    cout << "WELCOME TO GRINGOTTT's BANK!\n";
    cout << "Please choose from the following options:\n";
    cout << "1 - Enter Goblin Sick Days\n";
    cout << "2 - Display Something Cool\n";
    cout << "3 - End the Program\n";

    cin >> userChoice;
    while(cin.fail() || !( (userChoice == 1) && (userChoice == 2) && (userChoice == 3) )) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Invalid choice. Please choose 1-3.\n";
        cin >> userChoice;
    }


    return userChoice;

}

void GoblinSickDays() {
    int numGoblinTellers;
    int NUM_YEARS = 3;
    cout << "How many Goblin tellers worked at Gringotts during each of the last three years?\n";
    cin >> numGoblinTellers;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input. Please try again.\n;";
        cout << "How many Goblin tellers worked at Gringotts during each of the last three years?\n";
        cin >> numGoblinTellers;
    }

    for(int i = 0; i < NUM_YEARS; i++) {
        for(numGoblinTellers; )
    }

}