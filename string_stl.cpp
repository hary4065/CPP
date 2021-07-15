#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1; //Default Constructor call
    cout << "Empty String is printed \"" << s1 << "\"" << endl;
    s1 = "Hello";
    cout << "Subscripting method works for string object \"" << s1[0] << "\"" << endl;
    cout << "String assignment after object declaration \"" << s1 << "\"" << endl;
    string s2 = "World"; //Parameterised constructor call to assign a string
    string s3 = s1;      //Parameterised constructor call to copy string from string object
    s3 += s2;
    cout << "String Concatenated \"" << s3 << "\"" << endl;
    char str[] = "World";
    char str1 = 'B';
    s3 = s1 + ' ' + str1 + "eautiful" + ' ' + str;
    cout << "We can mix string with string object or with c style string or" << endl;
    cout << "with string or character directly \"" << s3 << "\"" << endl;
    cout << "String can be assigned to object direclty, no need of strcpy(). For e.g., enter anything" << endl;
    cin >> s2;
    cout << "You entered \"" << s2 << "\"" << endl;
}