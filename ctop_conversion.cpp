#include <iostream>
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
    operator int()
    {
        return a;
    }
};
int main()
{
    int x;
    complex c1;
    c1.setdata(10, 20);
    x = c1;
    cout << "x=" << x;
}