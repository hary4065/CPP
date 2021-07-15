#include <iostream>
#include <conio.h>
using namespace std;
class integer
{
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    friend void fun(integer);
};
void fun(integer c)
{
    cout << "Score is " << c.a << endl;
}
int main()
{
    integer i1;
    i1.setdata(3);
    fun(i1);
}