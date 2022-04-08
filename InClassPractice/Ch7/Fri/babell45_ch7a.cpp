/*

Questions
1. An error. 
2. True
3. False
4. True
5. True
6. True
7. True
8. True
9. The int value stored in x
10. The memory address of x
11. To dynamically allocate memory while the program is running
12. To free dynamic memory
13. 8
*/

#include <iostream>
using namespace std;

//14
int* dynamicArray(int size = 0) {
    cout << "Enter array size: ";
    cin >> size;
    int* myArr = new int[size];
    return myArr;
}


int main() {
    //15
    dynamicArray();
    return 0;
    
}