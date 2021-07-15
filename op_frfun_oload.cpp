#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a = 5, b = 10;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "Complex Number is " << a << "+" << b << "i" << endl;
    }

    friend complex operator+(complex, complex);
};
complex operator+(complex X, complex Y)
{
    complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}
int main()
{
    complex a1, a2, a3;
    a1.setdata(3, 4);
    a2.setdata(5, 6);
    a3 = a1 + a2;
    a3.showdata();
}