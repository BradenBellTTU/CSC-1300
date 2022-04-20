//Lab 11


//NOTES
struct myStruct {
    int var1;
    int var2;
    char var3;
    double var4;
};

void enterData(myStruct *structArray);

int main() {
    const int SIZE = 5;

    //When you create a struct you make your own datatype and can assign variables to it
    myStruct stuctVar;

    //Then you can refrence items in the structVar like so:
    structVar.var3 = 'Y';
    structVar.var1 = 2;
    //Sets the var3 in myStruct to 'Y' and var1 to 2

    //You can also populate them like an array:
    myStruct structVar2;
    structVar2 = {42, 1337, 'Y', 6.67};

    //You can also assign other variables to the struct

    myVar1 = structVar.var1;
    //Sets myVar1 to var1 stored in structVar


    //You can also make arrays with structs
    myStruct structVar[SIZE];

    return 0;
}

//Passing a struct to a function is the same as before you just have to have the '*' and it works like an normal array
void enterData(myStruct *structArray) {
    structArray[i].var3 = "whatever";
}

//You can also do this and it is the same as above, but most people use the above function as it uses less keystrokes
void enterData2(myStruct structArray) {
    structArray[i] -> var3 = "whatever";
}




//CONTENT TO USE IN THE LAB
struct Course {
    int var1;
    int var2;
    char var3;
    int *creditHours;
};

struct Students {
    Course courseInfo;
};


void enterData(Students *structArray) {
    //Dynamically allocates the memory for the array
    for (int i = 0; i < SIZE; i++) {
        structArray[i].courseInfo.creditHours = new int[structArray[i].courseInfo.numCourses];
    }
}

int main() {
    myStruct structVar[SIZE];
    //Dynamically deletes the memory for the array
    for (int i = 0; i < SIZE; i++) {
        delete studentsArray[i].courseInfo.creditHours;
    }
}