// WAP to calculate the net salary of an employee under the following condition:
// a. If salary greater than 20,000 and less than equal to 25,000; Bonus is 15%
// b. If salary is less than equal to 20,000; Bonus is 10%
// c. Else bonus is 5%

#include <iostream>
using namespace std;

double calculateNetSalary(double salary) {
    double bonus;
    if(salary > 20000 && salary <= 25000) {
        bonus = 0.15;
    } else if(salary <= 20000) {
        bonus = 0.10;
    } else {
        bonus = 0.05;
    }
    return salary + (salary * bonus);
}

int main() {
    double salary;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    cout << "Net salary of the employee is: " << calculateNetSalary(salary) << endl;
    return 0;
}