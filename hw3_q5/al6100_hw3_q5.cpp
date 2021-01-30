#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double weight, height, BMI;
    string status;

    cout << "Please enter weight (in pounds): ";
    cin >> weight;

    weight *= 0.453592;

    cout << "Please enter your height (in inches): ";
    cin >> height;

    height *= 0.0254;

    BMI = weight / pow(height, 2);

    if (BMI < 18.5) {
        status = "Underweight";
    } else if (BMI >= 18.5 && BMI < 25) {
        status = "Normal";
    } else if (BMI >= 25 && BMI < 30) {
        status = "Overweight";
    } else {
        status = "Obese";
    }

    cout << "The weight status is: " << status;

    return 0;
}