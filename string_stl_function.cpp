#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    string s1;
    s1.assign("Hello");
    cout << "String assigned \"" << s1 << "\"" << endl;
    s1.append("World");
    cout << "String appended \"" << s1 << "\"" << endl;
    s1.insert(5, ", Beautiful ");
    cout << "String inserted \"" << s1 << "\"" << endl;
    //first argument is index which sets starting point, 2nd argument is number of characters to be replaced, 3rd argument is replacement string
    s1.replace(7, 9, "Dear");
    cout << "String replaced \"" << s1 << "\"" << endl;
    cout << "String length is " << s1.size() << endl;
    s1.insert(7, "Dear ");
    cout << "After insertion, string length is " << s1.size() << endl;
    cout << "Finds string \"Dear\" from starting, whose index is " << s1.find("Dear") << endl;
    cout << "Finds String \"Dear\" from ending, whose index is " << s1.rfind("Dear") << endl;
    if (s1.find("Harry") == -1)
        cout << "String \"Harry\" Doesn't exist " << endl;
    char str[30];
    strcpy(str, s1.c_str());
    cout << "C style Character array \"" << str << "\"" << endl;
    s1.erase();
    if (!s1.size())
        cout << "String object is erased" << endl;
    cout << "String length is " << s1.size() << endl;
    s1 = "Hello";
    string s2 = "Hello";
    if (s1.compare(s2) > 0)
        cout << "Reverse of Dictionary order" << endl;
    else if (s1.compare(s2) < 0)
        cout << "Dictionary order" << endl;
    else
        cout << "Same String" << endl;
}