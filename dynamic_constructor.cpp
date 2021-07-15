#include <iostream>
using namespace std;
class test
{
    int a, b, *p;

public:
    test()
    {
        a = 0;
        b = 0;
        p = new int;
    }
    test(int x, int y, int z)
    {
        a = x;
        b = y;
        p = new int;
        *p = z;
    }
};
int main()
{
    test ob1;
    test ob2(10, 20, 30);
}