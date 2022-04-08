#include <iostream>

int main() {
    numVisitors = 0;
    coastersRidden = 0;

    for (int i = 0; i < numVisitors; i++)
        cout << "How many roller coasters did person " << i << " ride? ";
        cin >> coastersRidden;
        while(cin.fail()) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "Unexpected input, please try again.\n";
            cout << "How many coasters did person " << i << " ride? ";
            cin >> coastersRidden;
        }
        for (int j = 0; j < coastersRidden; j++) {
            
        }
}