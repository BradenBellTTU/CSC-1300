#include <iostream>
using namespace std;

int main() {
    double length, width, height, area;
    cout << "Area of Rectangle: L * W * H" << endl;
    cout << "Please enter length first, then width, then height" << endl;
    cin >> length >> width >> height;
    cout << "The area is: "  << (length * width * height) << endl;

}