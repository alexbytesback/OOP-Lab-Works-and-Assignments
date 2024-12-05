// Calculate the:
// a. The area of a triangle
// b. Perimeter of a triangle

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a triangle using Heron's formula
double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Function to calculate the perimeter of a triangle
double perimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

int main() {
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of the triangle is: " << area(a, b, c) << endl;
    cout << "Perimeter of the triangle is: " << perimeter(a, b, c) << endl;

    return 0;
}
