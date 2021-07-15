#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void f1() {}
    ~A()
    {
        cout << "A Destructor" << endl;
    }
};
class B : public A
{
    int b;

public:
    void f2() {}
    virtual ~B() { cout << "B Destructor" << endl; }
};
class C : public B
{
    int c;

public:
    void f3() {}
    ~C() { cout << "C Destructor" << endl; }
};
int main()
{

    B *p = new C;
    p->f1();
    //p->f2();
    //p->f3();
    delete p; //delete Dyanmically created object
}
