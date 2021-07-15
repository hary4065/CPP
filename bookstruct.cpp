#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
}
book input()
{
    book b;
    cout << "Enter BookID, Title and price of the book" << endl;
    cin >> b.bookid >> b.title >> b.price;
    return b;
}
void display(book b)
{
    cout << "\n"
         << b.bookid << " " << b.title << " " << b.price;
}