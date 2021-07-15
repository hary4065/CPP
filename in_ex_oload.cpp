#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x, b = y;
    }
    void show()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, complex);
};
ostream &operator<<(ostream &dout, complex C)
{
    cout << "a=" << C.a << " b=" << C.b;
    return dout;
}
istream &operator>>(istream &din, complex &C)
{
    cin >> C.a >> C.b;
    return din;
}
int main()
{
    complex a1;
    cout << "Enter a complex number.";
    cin >> a1;
    cout << "You entered ";
    cout << a1;
}