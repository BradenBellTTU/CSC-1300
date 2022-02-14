#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    //Variables
    const float BASE_SHIRT_COST = 19.99, SALES_TAX = 0.0975;
    float billTotal, discountRate, finalShirtCost;
    int orderQuantity;
    string userName;

    //Get name from user
    cout << "\n\nWelcome to the geek store, what is your name? ";
    getline(cin, userName);

    //Display discount rates
    cout << "\nAll shirts are $" << BASE_SHIRT_COST << ".\nWe offer quantity discounts as follows: \n" << endl;
    cout << setw(18) << "Number of Shirts" << setw(15) << "Discount\n";
    cout << setw(6) << "5-10" << setw(22) << "10%\n";
    cout << setw(7) << "11-20" << setw(21) << "15%\n";
    cout << setw(7) << "21-30" << setw(21) << "20%\n";
    cout << setw(12) << "31 or more" << setw(15) << "25%" << endl;
    cout << "\n";

    //Get number of shirts for order
    cout << userName << ", how many shirts would you like to order? ";
    cin >> orderQuantity;

    //Check discount brackets
    if (orderQuantity <= 0) {
        cout << "Invalid input: Please run the program again and enter a non-negative integer" << endl;
        return 0;
    }

    else if ( (orderQuantity >= 5) && (orderQuantity <= 10) )
        discountRate = 0.10;

    else if ( (orderQuantity >= 11) && (orderQuantity <= 20) )
        discountRate = 0.15;

    else if ( (orderQuantity >= 21) && (orderQuantity <= 30) )
        discountRate = 0.20;

    else if (orderQuantity >= 31)
        discountRate = 0.25;


    //Calculate bill total
    finalShirtCost = BASE_SHIRT_COST - (discountRate * BASE_SHIRT_COST);
    finalShirtCost = finalShirtCost + (finalShirtCost * SALES_TAX);
    billTotal = finalShirtCost * orderQuantity;

    //Display final bill to user
    cout <<	setprecision(2) << fixed << showpoint;
    cout << "--------------------------------------------------" << endl;
    //I have no clue how to make setw() work and look good with all lengths of usernames
    cout << "BILL FOR:" << setw(20) << userName << endl;
    cout << "DISCOUNTED COST:" << setw(9) << "$" << finalShirtCost << " (per shirt)" << endl;
    cout << "TOTAL COST:" << setw(14) << "$" << setprecision(2) << fixed << showpoint << billTotal << " (with tax)" << endl;

    return 0;
}