#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Define songInfo struct
struct songInfo {
    string name;
    string author;
    float length;
};


int main() {
    //Define songInfo struct
    struct songInfo song;

    //Get name of song and store it in songInfo struct
    cout << "Enter the name of the song: ";
    getline(cin, song.name);
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again\n";
        cout << "Enter the name of the song: ";
        getline(cin, song.name);
    }

    //Get author of song and store it in songInfo struct
    cout << "Enter the author: ";
    getline(cin, song.author);
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again\n";
        cout << "Enter the author: ";
        getline(cin, song.author);
    }

    //Get lenght of song and store it in songInfo struct
    cout << "Enter the song length (min.sec): ";
    cin >> song.length;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input, please try again\n";
        cout << "Enter the song length (min.sec): ";
        cin >> song.length;
    }

    //Display results to user
    cout << "\n\nYour song:\n";
    cout << "Name: " << setw(4) << " " << song.name << '\n';
    cout << "Author: " << setw(2) << " " << song.author << '\n';
    cout << "Length: " << setw(2) << " " << setprecision(2) << fixed << showpoint << song.length << '\n';

    return 0;
}

