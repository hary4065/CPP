#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    void fun() {}
    void foo() {}
};
class B : public A
{
public:
    friend void fun();
    friend void foo();
    /* if you want to make all function class A 
    friend function of class B 
    then following can be used rather 
    than declaring each function as friend */
    friend class A::
};
int main()
{
    A a1;
}