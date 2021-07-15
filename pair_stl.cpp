#include <iostream>
using namespace std;
class student
{
    int a;
    string name;

public:
    void setA(int a, string s)
    {
        this->a = a;
        name = s;
    }
    void showA()
    {
        cout << a << " " << name << endl;
    }
};
int main()
{
    system("cls");
    pair<string, int> p1;
    pair<int, int> p2;
    pair<string, student> p3;
    pair<int, student> p4;
    p1 = make_pair("Rahul", 56);
    cout << p1.first << " ";
    cout << p1.second << endl;
    cout << p3.first << " ";
    student s1;
    student s2;
    s1.setA(80, "Maxx");
    p4 = make_pair(40, s1);
    s2 = p4.second;
    s2.showA();
}