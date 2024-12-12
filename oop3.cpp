//Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        string className;
        int rollNumber;
        double marks;
        char grade;
    public:
        void setStudent(string n, string c, int r, double m)
        {
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
            if (marks >= 90)
            {
                grade = 'A';
            }
            else if (marks >= 80)
            {
                grade = 'B';
            }
            else if (marks >= 70)
            {
                grade = 'C';
            }
            else if (marks >= 60)
            {
                grade = 'D';
            }
            else if (marks >= 50)
            {
                grade = 'E';
            }
            else
            {
                grade = 'F';
            }
        }
        void show()
        {
            cout << "Name: " << name << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main()
{
    Student s;
    s.setStudent("Prashant", "Bachelor", 240023, 100);
    s.show();
    return 0;
}