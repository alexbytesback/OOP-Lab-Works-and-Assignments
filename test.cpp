#include <iostream>
using namespace std;

class Base
{
    public:
        int a;
    private:
        int b;
    protected:
        int c;
};

class Derived : public Base
{
    public:
        void set(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;
        }
        void show()
        {
            cout << a << " " << b << " " << c << endl;
        }
};

int main()
{
    Derived d;
    d.set(10, 20, 30);
    d.show();
    return 0;
}
