#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    void setDimension(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void showDimension()
    {
        cout << "Length=" << l << " breadth=" << b << " height=" << h << endl;
    }
};
int main()
{
    box b1;
    box *p = &b1;
    p->setDimension(2, 5, 8);
    p->showDimension();
}