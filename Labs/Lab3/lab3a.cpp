#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const float BASE_SHIRT_COST = 19.99, SALES_TAX = 0.0975;
    float billTotal, discountRate, finalShirtCost;
    int orderQuantity;
    string userName;
    cout << "Welcome to the geek store, what is your name? ";
    getline(cin, userName);

    cout << "All shirts are $" << SHIRT_COST << ".\n We offer quantity discounts as follows: \n" << endl;
    cout << setw(10) << "Number of Shirts" << setw(10) << "Discount\n";
    cout << setw(10) << "5-10" << setw(10) << "10%\n";
    cout << setw(10) << "11-20" << setw(10) << "15%\n";
    cout << setw(10) << "21-30" << setw(10) << "20%\n";
    cout << setw(10) << "31 or more" << setw(10) << "25%\n\n";

    cout << userName << ", how many shirts would you like to order? ";
    
    cin >> orderQuantity;

    if (orderQuantity <= 0) {
        cout << "Invalid input: Please run the program again and enter a non-negative integer" << endl;
        return 0
    }

    else if ( (orderQuantity >= 5) && (orderQuantity <= 10) )
        discountRate = 0.10;

    else if ( (orderQuantity >= 11) && (orderQuantity <= 20) )
        discountRate = 0.15;

    else if ( (orderQuantity >= 21) && (orderQuantity <= 30) )
        discountRate = 0.20;

    else if (orderQuantity >= 31)
        discountRate = 0.25;


    finalShirtCost = BASE_SHIRT_COST - (discountRate * BASE_SHIRT_COST);
    finalShirtCost = finalShirtCost - (finalShirtCost * SALES_TAX);
    billTotal = finalShirtCost * orderQuantity;

    cout << "--------------------------------------------------\n";
    cout << setw(10) << "BILL FOR:" << setw(10) << userName << "\n";
    cout << setw(10) << "DISCOUNTED COST:" << setw(10) << "$" << finalShirtCost << " (per shirt)\n";
    cout << setw(10) << "TOTAL COST:" << setw(10) << billTotal << endl;
}