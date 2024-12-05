//write a c++ program that uses function overloading to:
//a. Calculate the area of a traingle when the three sides are given
//b. calculate the area of the rectangle (when the length and breadth are given)

//We'll use Heron's formula to find the area of a traingle in terms of the lengths of its sides.

//Heron's formula: Area = sqrt(s*(s-a)*(s-b)*(s-c))

//1. A is the area of the traingle,
//2. a,b,c are the lengths of the sides of the traingle
//3. s is the semi-perimeter of the traingle, calculated as s = (a+b+c)/2

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a triangle using Heron's formula
double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Function to calculate the area of a rectangle
double area(double length, int breadth) {
    return length * breadth;
}

int main() {
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of the triangle is: " << area(a, b, c) << endl;


    double length;
    int breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle is: " << area(length, breadth) << endl;

    return 0;
}
