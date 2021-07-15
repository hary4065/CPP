#include <iostream>
#include <conio.h>
using namespace std;
template <class X>
class ArrayList
{
    struct controlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    controlBlock *s;

public:
    ArrayList(int capacity)
    {
        s = new controlBlock;
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }
    void addData(int index, X data)
    {
        if (index >= 0 && index < s->capacity)
            s->arr_ptr[index] = data;
        else
            cout << "\nArray index is out of bound";
    }
    void viewData(int index, X &data)
    {
        if (index >= 0 && index < s->capacity)
            data = s->arr_ptr[index];
        else
            cout << "\nArray index is out of bound";
    }
    void viewlist()
    {
        int i;
        for (i = 0; i < s->capacity; i++)
            cout << " " << s->arr_ptr[i];
    }
};
int main()
{
    ArrayList<float> list1(4);
    float data;
    list1.addData(0, 3.2);
    list1.addData(1, 6.4);
    list1.addData(2, 12.8);
    list1.addData(3, 25.6);
    list1.viewlist();
}
