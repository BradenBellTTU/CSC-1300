#include <iostream>
using namespace std;

int DisplayMenuGetChoice();
void GoblinSickDays();
int DisplayCoolMessage(int);

int main() {
    int coolMessageCount;

    switch(DisplayMenuGetChoice()){

        case 1:
            GoblinSickDays();
            break;
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