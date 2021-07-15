#include <iostream>
#include <conio.h>
using namespace std;
class account
{
private:
    int balance;
    static float roi;

public:
    void setBalance(int b)
    {
        balance = b;
    }
    static void setroi(float R)
    {
        roi = R;
    }
    void show()
    {

        cout << roi << endl;
    }
};
float account::roi;
int main()
{
    account a1, a2;
    a1.setroi(5);
    a1.show();
    account::setroi(4.8);
    a1.show();
}