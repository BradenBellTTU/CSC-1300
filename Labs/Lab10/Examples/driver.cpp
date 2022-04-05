#include "Functions.h"

int main() {
    int* myArr = NULL;
    const int DAYS = 80;

    myArr = makeArray(DAYS);

    //myArr[0] is not very efficient with pointer or heap arrays
    //So we'll have to do memory arithmatic

    //Static casting
    float var2 = static_cast<float>(days);

    //You have to free your memory!!!!
    //This is to prevent memory leaks
    delete [] myArr;

    //End program normally
    return 0;
}