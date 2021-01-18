#include <iostream>
using namespace std;


int main () {
    int quarters, dimes, nickels, pennies, total, dollars, cents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:\n";
    cin >> dollars;
    cin >> cents;

    total = (dollars * 100) + cents;

    quarters = total / 25;
    total -= (quarters * 25);

    dimes = total / 10;
    total -= (dimes * 10);

    nickels = total / 5;
    total -= (nickels * 5);

    pennies = total; /* Placed here for clarity */

    cout << quarters << " quarters, " << dimes << " dimes, " <<
    nickels << " nickels, and " << pennies << " pennies \n";

    return 0;
}