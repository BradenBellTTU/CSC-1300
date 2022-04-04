/*
	Title:  	Lab9b.cpp
	Author:		Braden Bell
	Date:		03.29.22
	Purpose:	Lab 9b - pointer practice
    Required Files: None
*/

#include <iostream>
using namespace std;

int main() {
    //Vars
    int length, width, area;
    int* lengthPtr = nullptr;
    int* widthPtr = nullptr;

    //Get user input for length and width
    cout << "Please input the length of the rectangle.\n";
    cin >> length;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input.\n";
        cout << "Please input the length of the rectangle.\n";
        cin >> length;
    }
    cout << "Please input the width of the rectangle.\n";
    cin >> width;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "Unexpected input.\n";
        cout << "Please input the width of the rectangle.\n";
        cin >> width;
    }

    //Assign pointers
    lengthPtr = &length;
    widthPtr = &width;

    //Calculate area with pointers
    area = *lengthPtr * *widthPtr;

    //Tell user area and whether length or width is bigger or equal
    cout << "The area is " << area << "\n";
    if (*lengthPtr > *widthPtr)
        cout << "The length is greater than the width.";
    
    else if (*widthPtr > *lengthPtr)
        cout << "The width is greater than the length.";
    
    else
        cout << "The length and the width are the same.";
    
    return 0;

}