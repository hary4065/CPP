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
    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};
int main()
{
    complex a1, a2;
    a1.setdata(3, 4);
    a2 = a1 - ;
    a2.showdata();
}