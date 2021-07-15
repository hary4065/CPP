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
    void showdata()
    {
        cout << "a=" << a << endl;
    }
    integer operator++() //preinc
    {
        integer temp;
        temp.a = ++a;
        return temp;
    }
    integer operator++(int) //postinc
    {
        integer temp;
        temp.a = a++;
        return temp;
    }
};
int main()
{
    integer i1, i2;
    i1.setdata(3);
    i2 = i1++;
    i1.showdata();
    i2.showdata();
}