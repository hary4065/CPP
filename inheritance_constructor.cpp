#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        cout << "Parent constructor" << endl;
    }
    A(int k)
    {
        a = k;
        cout << "a=" << a << endl;
    }
    ~A() { cout << "Parent" << endl; }
};
class B : public A
{
    int b;

public:
    B() : A() //we can pass arguments here.
    {
        cout << "Child constructor" << endl;
        ;
    }
    B(int x, int y) : A(x) //we can pass arguments here.
    {
        b = y;
        cout << "b=" << b << endl;
    }
    ~B() { cout << "child" << endl; }
};
int main()
{
    B obj, obj1(2, 3);
}
