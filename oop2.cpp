//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }
        bool isValid()
        {
            if (year < 0)
            {
                return false;
            }
            if (month < 1 || month > 12)
            {
                return false;
            }
            if (day < 1 || day > 31)
            {
                return false;
            }
            if (month == 2)
            {
                if (year % 4 == 0)
                {
                    if (day > 29)
                    {
                        return false;
                    }
                }
                else
                {
                    if (day > 28)
                    {
                        return false;
                    }
                }
            }
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                if (day > 30)
                {
                    return false;
                }
            }
            return true;
        }
};

int main()
{
    Date d;
    d.setDate(31, 12, 2020);
    if (d.isValid())
    {
        cout << "Date is valid." << endl;
    }
    else
    {
        cout << "Date is invalid." << endl;
    }
    return 0;
}