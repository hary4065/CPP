#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a = 10, b = 20;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
    }
    complex(complex &c)
    {
        cout << "Copy Constructor Running" << endl;
    }
};
int main()
{
    complex a1(3, 4), a2(5);
    complex a3(a1);
    complex a4(a2);
}