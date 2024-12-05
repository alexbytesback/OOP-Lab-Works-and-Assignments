// Write a temperature conversion program from Celsius to Fahrenheit and vice-versa
// depending on choice by the user.
// °𝐹 = (°𝐶 ×9/5) + 32

#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int choice;
    double temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "Enter your choice: \n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            break;
        case 2:
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}