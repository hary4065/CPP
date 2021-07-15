#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex() {}
    complex(int k)
    {
        a = k;
        b = 0;
    }
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};
int main()
{
    int x = 50;
    complex c1, c2, c3(x);
    c1 = complex(x); //c1 calls complex(int) passing value of x as parameter.
    c2 = x;          //c1 calls complex(int) passing value of x as parameter.
    c1.showdata();
    c2.showdata();
    c3.showdata();
}