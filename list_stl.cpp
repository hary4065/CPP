#include <iostream>
#include <list>
using namespace std;
int main()
{
    system("cls");
    list<int> L1;                                 // Empty list L1 is created of int type
    list<int> L2{11, 21, 13, 22, 95, 13, 86, 77}; // list L2 is declared and initialised.
    // cout << L2[1];   subscript operator doesn't work for list
    //Since list can accessed sequentially only, we need an iterator.
    list<int>::iterator p = L2.begin(); //Iterator p is created and points to begining of the list
    while (p != L2.end())
        cout << *p++ << " ";
    cout << endl;
    cout << "Returns size of the list, which is " << L2.size() << endl;
    cout << endl;
    cout << "Sorted New list" << endl;
    /* Since list is dynamically created and list can
    be accessed only sequentially, we again create an
    iterator q which points to begining of the list L2.
    Iterator p won't work without reassignment to list L2.
    */
    cout << "Values 88 and 10 is inserted in list L2" << endl;
    L2.push_back(88);  //insert the value at the end of the list
    L2.push_front(10); //insert the value at the begining of the list
    cout << "Any occurence of Value 13 is removed from the list L2" << endl;
    L2.remove(13); //Remove passed value from the list if it exists in list L2. In case of duplicate entries all are removed from the list
    L2.sort();     //sort the list L2 in ascending order
    list<int>::iterator q = L2.begin();
    //p = L2.begin();   Rather than creating an iterator we could reassign iterator p to begining of the list L2.
    while (q != L2.end())
        cout << *q++ << " ";
    cout << endl;
    cout << "Returns size of the list " << L2.size() << endl;
    cout << endl;
    cout << "One value is removed from both begining of the list and ending of list L2" << endl;
    L2.pop_front(); //Remove a value from the begining of the elist
    L2.pop_back();  //Remove a value from the end of the list
    cout << "list L2 is Sorted in Reverse order" << endl;
    L2.reverse();   //Sort the list in descending order
    p = L2.begin(); //iterator p is reused.
    while (p != L2.end())
        cout << *p++ << " ";
    cout << endl;
    cout << "Returns size of the list, which is " << L2.size() << endl;
    L2.clear();
    cout << "After clearing the list, Size of list is " << L2.size() << endl;
}