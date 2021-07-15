#include <iostream>
using namespace std;
class item
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    int geta() { return a; }
    int getb() { return b; }
};
class prod
{
    int a, b;

public:
    void showdata()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    prod() {}
    prod(item i)
    {
        a = i.geta();
        b = i.getb();
    }
};
int main()
{
    system("cls");
    item i1;
    prod p1;
    i1.setdata(10, 20);
    p1 = i1;
    p1.showdata();
}