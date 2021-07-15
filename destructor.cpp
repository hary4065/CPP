#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a = 10, b = 20;

public:
    complex()
    {
        cout << "Constructor is running" << endl;
    }
    ~complex()
    {
        cout << "Destructor is running" << endl;
    }
};
void fun()
{
    complex obj;
}
int main()
{
    fun();
    cout << "Main function Ends after destructor terminates";
}