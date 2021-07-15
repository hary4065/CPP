#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> V1; //creates a blank vector V1 of int type. Here blank means zero capacity.
    cout << "Returns Capacity of V1, which is " << V1.capacity() << endl;
    /* push_back() is a member function. It first increases capacity by 1 and then adds value to the end of the vector.*/
    V1.push_back(4);
    cout << "New capacity of V1 is " << V1.capacity() << endl;
    V1.push_back(4);
    cout << "New capacity of V1 is " << V1.capacity() << endl;
    cout << endl;
    vector<int> V2{10, 20, 30, 40, 50, 60}; //Vector initialisation in declaration itself. It also sets initial capacity to 6.
    cout << "Capacity of V2 is " << V2.capacity() << endl;
    vector<int>::iterator it = V2.begin(); //declares an iterator which points to first element of the vector
    V2.insert(it + 2, 35);                 //inserts the value at index 2 of the vector V2 as well as increases capacity
    for (int i = 0; i < V2.size(); i++)
        cout << "V2[" << i << "]=" << V2[i] << endl;
    cout << "New Capacity of V2 is " << V2.capacity() << endl;
    cout << "Returns First value of Vector V2, which is " << V2.front() << endl;
    cout << "Returns Last Value of Vector V2, which is " << V2.back() << endl;
    cout << "Value at index 4 of vector V2, which is " << V2.at(4) << endl; //
    cout << "Value at V2[3] is " << V2[4] << endl;                          //subscript operator works for vector also
    cout << endl;
    vector<int> V3(4); //Creates a vector V3 of capacity 3
    cout << "Capacity of V3 is " << V3.capacity() << endl;
    cout << endl;
    vector<int> V4(5, 10); //Creates a vector V4 and takes two arguments. First argument is capacity of vector and second is the value, by which vector is to be filled
    for (int i = 0; i < 4; i++)
    {
        V4.pop_back(); //removes the last element of the vector.
        cout << "Capacity of Vector V4 is " << V4.capacity() << endl;
        cout << "Size of Vector V4 is " << V4.size() << endl;
    }
    V4.clear(); //removes all the values from the vector
    cout << "Capacity of Vector V4 is " << V4.capacity() << endl;
    cout << "Size of Vector V4 is " << V4.size() << endl;
}