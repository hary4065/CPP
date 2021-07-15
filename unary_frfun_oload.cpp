#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    friend complex operator-(complex);
};
complex operator-(complex X)
{
    complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}
int main()
{
    complex a1, a2;
    a1.set(3, 5);
    a2 = -a1;
    a2.show();
}