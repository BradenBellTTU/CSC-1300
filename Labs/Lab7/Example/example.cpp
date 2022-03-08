#include <fstream>
#include <iostream>
#include "Functions.h"

int main() {
    ofstream myFile;
    string fileName;

    getline(cin, fileName);
    while(!myFile.open(fileName)) {
        cout << "file does not exist" << endl;
        getline(cin, fileName);
    }
    myFile.close();
}