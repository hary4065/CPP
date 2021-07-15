#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("file.txt");
    cout << fin.tellg();
    for (int i = 0; i < 5; i++)
        fin.get();
    cout << fin.tellg();
    fin.seekg(2);
    cout << fin.tellg();
    cout << (char)fin.get();
}