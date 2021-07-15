#include <iostream>
#include <conio.h>
using namespace std;
struct complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(5, 6);
    c2.setData(5, 6);
    c3 = c1.add(c2);
    c3.showData();
}
