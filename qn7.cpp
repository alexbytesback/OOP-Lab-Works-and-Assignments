// Write a program to enter a number and check if it is prime or not.

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
// Output: Enter a number: 7
// 7 is a prime number.