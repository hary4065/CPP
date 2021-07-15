#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("file.txt", ios::app);
    cout << fout.tellp();
    fout << "again";
    cout << fout.tellp();
    fout.close();
}
