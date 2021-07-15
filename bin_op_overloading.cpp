#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << " b=" << b;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex a1, a2, a3, a4, a5;
    a1.setdata(3, 4);
    a2.setdata(3, 4);
    a3 = a1.operator+(a2);
    a4 = a1 + a2;
    a5 = +a1;
    a5.showdata();
}