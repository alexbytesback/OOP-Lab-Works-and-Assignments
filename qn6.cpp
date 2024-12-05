// WAP to find the volume of the cube, cuboid and cylinder using function overloading and
// default arguments.

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the volume of a cube
double volume(double side) {
    return pow(side, 3);
}

// Function to calculate the volume of a cuboid

double volume(double length, double breadth, double height) {
    return length * breadth * height;
}

// Function to calculate the volume of a cylinder
double volume(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

int main() {
    double side, length, breadth, height, radius;
    cout << "Enter the side of the cube: ";
    cin >> side;
    cout << "Volume of the cube is: " << volume(side) << endl;

    cout << "Enter the length, breadth and height of the cuboid: ";
    cin >> length >> breadth >> height;
    cout << "Volume of the cuboid is: " << volume(length, breadth, height) << endl;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of the cylinder is: " << volume(radius, height) << endl;

    return 0;
}
