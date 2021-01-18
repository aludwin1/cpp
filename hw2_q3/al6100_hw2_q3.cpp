#include <iostream>
using namespace std;

int main () {
    int john_days, john_hours, john_minutes;
    int bill_days, bill_hours, bill_minutes;
    int total_days, total_hours, total_minutes;

    cout << "Please enter the number of days John has worked: ";
    cin >> john_days;

    cout << "Please enter the number of hours John has worked: ";
    cin >> john_hours;

    cout << "Please enter the number of minutes John has worked: ";
    cin >> john_minutes;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> bill_days;

    cout << "Please enter the number of hours Bill has worked: ";
    cin >> bill_hours;

    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> bill_minutes;

    total_minutes = bill_minutes + john_minutes;

    int hours_from_minutes = total_minutes / 60;
    total_minutes -= (hours_from_minutes * 60);

    total_hours = bill_hours + john_hours + hours_from_minutes;

    int days_from_hours = total_hours / 24;
    total_hours -= (days_from_hours * 24);

    total_days = bill_days + john_days + days_from_hours;

    cout << "The total time both of them worked together is: " <<
    total_days << " days, " << total_hours << " hours and " <<
    total_minutes << " minutes.\n";
}