#include <conio.h>
#include <iostream>
using namespace std;
int add(int, int = 0, int = 8);
int main()
{
    cout << add(4, 6, 5) << endl;
    cout << add(4, 6) << endl;
}
int add(int x, int y, int z)
{
    return (x + y + z);
}
