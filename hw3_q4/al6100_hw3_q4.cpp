#include <iostream>
using namespace std;

int main() {
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;

    double real_number;
    int method, int_number;

    cout << "Please enter a Real number:\n";
    cin >> real_number;
    int_number = (int) real_number;
    cout << "Choose your rounding method:\n1. Floor round\n2. Ceiling round\n3.Round to the nearest whole number\n";
    cin >> method;

    switch(method) {
        case FLOOR_ROUND:
            cout << int_number << endl;
        case CEILING_ROUND:
            cout << int_number + 1 << endl;
        case ROUND:
            if (int_number < 0) {
                if ((real_number - int_number) * -1 >= 0.5) {
                    cout << int_number + 1 << endl;
                } else {
                    cout << int_number - 1 << endl;
                }
            } else {
                if ((real_number - int_number) * -1 >= 0.5) {
                    cout << int_number + 1 << endl;
                } else {
                    cout << int_number - 1 << endl;
                }
            }
    }
    return 0;
}

