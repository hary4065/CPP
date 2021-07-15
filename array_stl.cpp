#include <iostream>
#include <array>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    array<int, 8> A = {1, 2, 3, 4, 5};
    array<int, 8> B = {7, 6, 5, 4, 3, 2, 1, 0};
    cout << A.at(4) << endl;
    cout << A[2] << endl;
    A.swap(B);
    cout << A.front() << endl;
    cout << A.back() << endl;
    A.fill(4);
    cout << A.size() << endl;
    cout << A.begin() << endl;
    cout << A.end() << endl;
    cout << sizeof(int) << endl;
    getch();
}