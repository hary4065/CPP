#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a = 10;

public:
    int fun()
    {
        return a;
    }
    void foo()
    {
    }
};
class B
{
    int a = 20;

public:
    friend int A::fun();
    //scope resolution is needed to say fun() belongs to class A
    friend void A::foo();
    /* if you want to make all member function of 
    class A, friend function of class B then 
    following can be used rather than declaring 
    each function as friend */
    friend class A;
};
void fun()
{
}
int main()
{
}