#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    virtual void f1() = 0;
    void f2()
    {
        cout << "Parent Class" << endl;
    }
};
class B : public A
{
public:
    void f1()
    {
        cout << "Child Class" << endl;
    }
};
int main()
{
    A *p;
    B obj;
    p = &obj;
    p->f1();
}