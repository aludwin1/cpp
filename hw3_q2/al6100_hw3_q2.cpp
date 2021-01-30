#include <iostream>
#include <string>
using namespace std;


int main () {
    string name, status = "None";
    int graduation_year, current_year;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your graduation year: ";
    cin >> graduation_year;

    cout << "Please enter your current year: ";
    cin >> current_year;

    if (graduation_year - current_year == current_year) {
        status = "Graduated";
    } else if (graduation_year - current_year == 4) {
        status = "Freshman";
    } else if (graduation_year - current_year == 3) {
        status = "Sophomore";
    } else if (graduation_year - current_year == 2) {
        status = "Junior";
    } else if (graduation_year - current_year == 1) {
        status = "Senior";
    } else {
        status = "Not in college yet";
    }

    cout << name << ", you are a " << status;
    return 0;
}
