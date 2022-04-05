#include <iostream>
#include <string>

using namespace std;

int main() {
    string myStr;
    getline(cin, myStr);
    int num = 0;
    size_t found;

    found = myStr.find("to ");
    if (found != string::npos) {
        cout << "'to' found" << endl;
        myStr.erase(myStr.begin(), myStr.begin()+(found+2));
        cout << "New string: " << myStr << endl;
    }


    num = stoi(myStr);
    found = myStr.find(",");

    if (found != string::npos) {
        cout << "Comma found" << endl;
        num *= 1000;
    }
    
    cout << num << endl;

    if (num > 10000) 
        cout << "true\n";

    return 0;
}