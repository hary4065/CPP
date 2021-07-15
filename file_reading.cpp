#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    ifstream fin;
    fin.open("file.txt", ios::app);
    cout << "\n"
         << fin.tellg();
    while (!fin.eof())
    {
        ch = fin.get();
        cout << ch;
    }
    fin.close();
}
