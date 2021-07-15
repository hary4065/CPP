#include <iostream>
using namespace std;
class Dummy
{
    int a, b;
    int *p;

public:
    void SetData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void showData()
    {
        cout << "a=" << a << " b=" << b << " address=" << p << endl;
    }
    Dummy()
    {
        p = new int;
    }
    Dummy(Dummy &d)
    {
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
        //p = d.p;  Makes shallow copy
    }
};
int main()
{
    Dummy d1;
    d1.SetData(10, 20, 30);
    Dummy d2;
    d2 = d1;
    d1.showData();
    d2.showData();
}