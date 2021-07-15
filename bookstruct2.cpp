#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
struct book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    void input()
    {
        cout << "Enter BookID, Title and price of the book" << endl;
        cin >> bookid >> title >> price;
    }
    void display()
    {
        cout << bookid << " " << title << " " << price;
    }
};
void display(book);
book input();
int main()
{
    book b1;
    b1.input();
    b1.display();
}
