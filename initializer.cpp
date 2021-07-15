#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a, b;
    const int c;
    int &y;

public:
    A(int x, int y) : c(x), y(y) {}
    void showData()
    {
        cout << "a=" << a << " b=" << b << " ref=" << y;
    }
};
int main()
{
    int x = 48;
    A ob(3, x);
    ob.showData();
}