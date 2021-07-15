#include <iostream>
#include <conio.h>
using namespace std;
class Car
{
public:
    virtual void ShiftGear()
    {
        cout << "Manual Gear Transmission";
    }
};
class SportsCar : public Car
{
public:
    void ShiftGear()
    {
        cout << "Automatic Gear Transmission";
    }
};
int main()
{
    Car *p;
    SportsCar ob;
    p = &ob;
    p->ShiftGear(); //method overriding
}