#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    int roll;
    char name[20];

    class Address
    {
        int Houseno;
        char street[20];
        char city[20];
        char state[20];
        int pincode;

    public:
        void setAddress(int h, char *s, char *c, char *st, int p)
        {
            Houseno = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            pincode = p;
        }
        void showAddress()
        {
            cout << "Address: House No - " << Houseno << ", " << street << ", " << city << ", " << state << "Pincode: " << pincode << endl;
        }
    };

public:
    void setroll(int r) { roll = r; }
    void setName(char *n) { strcpy(name, n); }
    Address Ad;
    void setAddress(int h, char *s, char *c, char *st, int p)
    {
        Ad.setAddress(h, s, c, st, p);
    }
    void getstudent()
    {
        cout << "Student Data" << endl;
        cout << roll << "   " << name << "  ";
        Ad.showAddress();
    }
};
int main()
{
    //Student::Address ad; //error as class is declared as private
    Student s1;
    s1.setroll(10);
    s1.setName("Harry");
    s1.setAddress(401, "Hanuman Street", "Faridabad", "Haryana", 121004);
    s1.getstudent();
}