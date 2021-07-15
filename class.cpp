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
        cout << "a=" << a << " b=" << b << endl;
    }
};
int main()
{
    complex c1;
    c1.setdata(3, 9);
    c1.showdata();
}