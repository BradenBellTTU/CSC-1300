

int myVar = 0;

//doing this will print out the memory address of myVar
cout << &myVar << endl;

//This is a pointer that stores the memory address of myVar
int* prtVar = &myVar;


//This needs to be in the lab
int length = 0;
int width = 0;
int* lengthPtr = nullptr;
int* widthPtr = nullptr;

lengthPtr = &length;
widthPtr = &width;

area = *lengthPtr * *widthPtr;
//


//Vectors
vector<int> name = {1,2,3,4,5};
//See cplusplus.com for more details
