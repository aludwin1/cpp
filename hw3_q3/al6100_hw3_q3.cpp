#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    int a, b, c;
    double sqrt_result, result_1, result_2;

    cout << "Please enter a value of a: ";
    cin >> a;

    cout << "Please enter a value of b: ";
    cin >> b;

    cout << "Please enter a value of c: ";
    cin >> c;

    sqrt_result = sqrt(pow(b, 2) - (4 * a * c));

    result_1 = ((-1 * b) + sqrt_result) / (2 * a);
    result_2 = ((-1 * b) - sqrt_result) / (2 * a);

    if (result_1 == result_2) {
        cout << "The equation has a single solution x=" << result_1;
    } else {
        cout << "The equation has two solutions x=" << result_1 << ", " << result_2;
    }

    return 0;
}

