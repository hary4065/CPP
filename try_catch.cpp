#include <iostream>
#include <conio.h>
using namespace std;
int fun()
{
    throw 10;
}
int main()
{

    try
    {
        fun();
    }
    catch (int)
    {
        cout << "Exception Handled";
    }
}