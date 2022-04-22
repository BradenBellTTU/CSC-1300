#include <iostream>
using namespace std;

const int SIZE = 5;

struct Phone {
    string type;
    string color;
    int memoryCap;
};

void addPhone(Phone*);
void printArray(Phone*);

int main() {
    Phone* phoneArray;
    phoneArray = new Phone[SIZE];
    addPhone(phoneArray);
    printArray(phoneArray);
    delete [] phoneArray;
    return 0;
}



void addPhone(Phone* phoneArray) {

    for(int i = 0; i < SIZE; i++) {
        cout << "Enter data for phone number " << i + 1 << '\n';
        cout << "What phone do you have?\n";
        getline(cin, phoneArray[i].type);
        cout << "What color is it?\n";
        getline(cin, phoneArray[i].color);
        cout << "What is the capacity of the phone? (in GB)\n";
        cin >> phoneArray[i].memoryCap;
        cin.ignore();
    }
}

void printArray(Phone* phoneArray) {

    for(int i = 0; i < SIZE; i++) {
        cout << "Phone:\t\t" << phoneArray[i].type << '\n';
        cout << "Color:\t\t" << phoneArray[i].color << '\n';
        cout << "Capacity:\t\t" << phoneArray[i].memoryCap << " GB" << '\n';
    }
}