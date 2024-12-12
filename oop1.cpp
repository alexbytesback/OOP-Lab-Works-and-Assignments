//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        int employeeID;
        double salary;
    public:
        void setSalary(double s)
        {
            salary = s;
        }
        void setSalary(double s, double bonus)
        {
            salary = s + bonus;
        }
        void show()
        {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    Employee e;
    e.setSalary(50000);
    e.show();
    e.setSalary(50000, 10000);
    e.show();
    return 0;
}
