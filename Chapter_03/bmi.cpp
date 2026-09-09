#include <iostream>
using namespace std;

int main() {
    // contants for conversions
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;
    //variables for weight and height
    double weightInPounds = 0.0;
    double heightInInches = 0.0;
    //prompt user for weight and height
    cout<< "Enter weight in pounds: ";
    cin >> weightInPounds;
    cout<< "Enter height in inches: ";
    cin >> heightInInches;
    //calculate BMI
    double bmi = weightInPounds * KILOGRAMS_PER_POUND / ((heightInInches * METERS_PER_INCH) * (heightInInches * METERS_PER_INCH));
    //display bmi
    cout << "BMI: " << bmi << endl;
    //determineand display BMI category
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Normal" << endl;
    } else if (bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }
    
    return 0;
}
