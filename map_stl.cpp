#include <iostream>
#include <map>
using namespace std;
int main()
{
    system("cls");
    map<int, string> customer; //empty array
    //Array declaration and initialisation
    map<int, string> c1{{100, "Gajendra"}, {123, "Dillip"}, {145, "Aditya"}};
    customer[100] = "Gajendra";
    customer[123] = "Dillip";
    customer[145] = "Aditya";
    customer[171] = "Shahid";
    customer[200] = "Rajesh";
    cout << "Returns Value at index 100, which is \"" << customer[100] << "\"" << endl;
    cout << "Index is invalid. So, No string is printed \"" << customer[101] << "\"." << endl;
    cout << "But for some reason a new index is created in array. Thats why no error is shown." << endl;
    customer[102];
    customer[103];
    cout << "Returns value at index 200, which is \"" << customer.at(200) << "\"" << endl;
    cout << "Size of the array is " << customer.size() << endl;
    cout << "A new key-value {254,\"Harry\"} pair in inserted" << endl;
    customer.insert(pair<int, string>{254, "Harry"});
    cout << "New size of the array is " << customer.size() << endl;
    cout << "Printing index of the Array followed by value at that index" << endl;
    map<int, string>::iterator p = customer.begin(); //Declares an iterator p which points to begining of the array
    for (int i = 1; p != customer.end(); p++)
    {
        cout << p->first << "    "; //prints Index of the array
        cout << p->second << endl;  //prints value of the array
    }
    customer.clear();
    if (customer.empty())
        cout << "Array is empty as ";
    else
        cout << "Array is not empty as " << endl;
    cout << "size of the array is " << customer.size() << endl;
}