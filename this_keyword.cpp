#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showDimension()
    {
        cout << "Length=" << this->l << " breadth=" << this->b << " height=" << this->h << endl;
    }
};
int main()
{
    box b1;
    b1.setDimension(2, 5, 8);
    b1.showDimension();
}