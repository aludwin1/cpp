#include <iostream>
using namespace std;


int main () {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    double first_item, second_item, base_price, price_after_discounts, total_price, tax;
    char has_club_card;

    cout << "Enter price of first item: ";
    cin >> first_item;

    cout << "Enter price of second item: ";
    cin >> second_item;

    base_price = first_item + second_item;

    if (first_item < second_item) {
        price_after_discounts = second_item + (first_item / 2);
    } else {
        price_after_discounts = first_item + (second_item / 2);
    }

    cout << "Does customer have a club card? (Y/N): ";
    cin >> has_club_card;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    tax = tax / 100;

    if (has_club_card == 'Y' || has_club_card == 'y') {
        price_after_discounts *= 0.90;
    }

    total_price = price_after_discounts * (1 + tax);

    cout.precision(1);
    cout << "Base price: " << base_price << endl;
    cout << "Price after discounts: " << price_after_discounts << endl;

    cout.precision(5);
    cout << "Total price: " << total_price << endl;
    return 0;
}
