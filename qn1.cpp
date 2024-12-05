//Write a program to enter a number and check if it is even or odd.
#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if(num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEvenOdd(num);
    return 0;
}