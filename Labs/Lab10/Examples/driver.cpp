#include "Functions.h"

int main() {
    int* myArr = NULL;
    const int DAYS = 80;

    myArr = makeArray(DAYS);

    //myArr[0] is not very efficient with pointer or heap arrays
    //So we'll have to do memory arithmatic
}