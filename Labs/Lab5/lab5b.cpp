#include <iostream>
using namespace std;

int main() {
    int rows, i, j, k;

    cin >> rows;
    while (cin.fail() || !(rows >= 2)) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Oops you must enter a number greater than 1!" << endl;
        cin >> rows;
    }

    for (i = 0; i < rows; i++){
        for(j = rows; j>i; j--){
            cout << ' ';
        }
        for(k = 0; k < (2 * i + 1); k++) {
            cout << '$';
        }
        cout << "\n";
    }

    return 0;
}