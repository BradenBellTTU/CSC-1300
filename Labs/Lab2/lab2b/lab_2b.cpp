#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double SALES_TAX = 0.0975;
    string item1Name, item2Name;
    int item1Quantity, item2Quantity;
    double item1Cost, item2Cost, totalCost;

    cout << "Please input the name of the first item: ";
    getline(cin, item1Name);
    cout << "Please input the number of " << item1Name << " bought: ";
    cin >> item1Quantity;
    cin.ignore();
    cout << "Please input the price of " << item1Name << ": $";
    cin >> item1Cost;
    cin.ignore();
    cout << "\n";

    cout << "Please input the name of the second item: ";
    getline(cin, item2Name);
    cout << "Please input the number of " << item2Name << " bought: ";
    cin >> item2Quantity;
    cin.ignore();
    cout << "Please input the price of " << item2Name << ": $";
    cin >> item2Cost;

    totalCost = (item1Quantity * item1Cost) + (item2Quantity + item2Cost);
    totalCost = (totalCost * SALES_TAX) + totalCost;

    cout << setprecision(2) << fixed << showpoint << "Your total bill is: $" << totalCost << endl;
    return 0;
    
}