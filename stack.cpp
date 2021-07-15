#include <iostream>
#include <conio.h>
using namespace std;
class array
{
private:
    int a[10];

public:
    void insert(int index, int value)
    {
        a[index] = value;
    }
};
class Stack : public array
{
    int top;

public:
    void push(int value)
    {
        insert(top, value);
    }
};
int main()
{
    Stack s1;
    s1.push(34);
    s1.insert(2, 34); /* against stack insertion rule thus inheritance should be either private or protected */
}