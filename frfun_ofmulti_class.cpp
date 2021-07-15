// Useful in case if it is needed to access data of multiple classes.
#include <iostream>
#include <conio.h>
using namespace std;
class B; // class is declared later but mentioned earlier thus need declaration
class A
{
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    friend void fun(A, B);
};
class B
{
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    friend void fun(A, B);
};
void fun(A o1, B o2)
{
    cout << "Sum is " << o1.a + o2.b << endl;
}
int main()
{
    A a1;
    B b1;
    a1.setdata(6);
    b1.setdata(7);
    fun(a1, b1);
}