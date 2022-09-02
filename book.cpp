#include<bits/stdc++.h>
using namespace std;
class Book
{
    string name;
    int isbn;
    int pn;
    string author;
    public:
    void get()
    {
        cout << "ENTER NAME OF BOOK : " << endl;
        cin >> name;
        cout << "ENTER ISBN OF BOOK : " << endl;
        cin >> isbn;
        cout << "ENTER NO. OF PAGES OF BOOK : " << endl;
        cin >> pn;
        cout << "ENTER AUTHOR OF BOOK : " << endl;
        cin >> author;
    }
    void display()
    {
        cout << "BOOK NAME IS : " << name << endl;
        cout << "ISBN NUMBER IS : " << isbn << endl;
        cout << "PAGES ARE : " << pn << endl;
        cout << "AUTHOR NAME IS : " << author << endl;
    }
};
int main()
{
    Book b1,b2;
    b1.get();
    b1.display();
    b2.get();
    b2.display();
}