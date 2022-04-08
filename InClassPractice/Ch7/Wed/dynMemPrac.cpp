#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int input = 0;
    string line(10, '*');

    cout << "how many dogs are you adopting? \n";
    cin >> input;

    string *name = new string[input];
    string *breed = new string[input];
    int *age = new int[input];

    cout << "Enter data: \n";

    for (int i = 0; i < input; i++) {
        cout << "Dog " << i + 1 << ":\n";
        cout << line << '\n';
        cout << "Name: ";
        cin.ignore();
        getline(cin, *(name+i));

        cout << "Breed: ";
        getline(cin, *(breed+i));

        cout << "Age: ";
        cin >> *(age+i);
        cin.ignore();
        cout << '\n';
    }

    cout << "Print output: \n";
    for (int i = 0; i < input; i++) {
        cout << '\n' << "Dog " << i + 1 << ":\n";
        cout << line << '\n';
        cout << "Name: " << name[i];
        cout << '\n' << "Breed: " << breed[i];
        cout << '\n' << "Age: " << age[i] << '\n';

        cout << '\n';
    } 

    delete [] name;
    delete [] breed;
    delete [] age;
    return 0;
}