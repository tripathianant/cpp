#include<bits/stdc++.h>
using namespace std;
class Account
{
    int an;
    string name;
    string at;
    int bal;
    public:
    void getAccountInformation()
    {
        cout << "ENTER ACCOUNT NUMBER : " << endl;
        cin >> an;
        cout << "ENTER NAME : " << endl;
        cin >> name;
        cout << "ENTER ACCOUNT TYPE : " << endl;
        cin >> at;
        cout << "ENTER ACCOUNT BALANCE : " << endl;
        cin >> bal;
    }
    void display()
    {
        cout << "ACCOUNT NUMBER IS : " << an << endl;
        cout << "NAME IS : " << name << endl;
        cout << "ACCOUNT TYPE IS : " << at << endl;
        cout << "ACCOUNT BALANCE IS : " << bal << endl;
    }
    void withdraw()
    {
        int x;
        cout << "ENTER AMMOUNT YOU WANT TO WITHDRAW : " << endl;
        cin >> x;
        bal=bal-x;
        cout << "AMMOUNT LEFT IS : " << bal << endl;
    }
    void deposit()
    {
        int y;
        cout << "ENTER AMMOUNT YOU WANT TO DEPOSIT : " << endl;
        cin >> y;
        bal=bal+y;
        cout << "AMMOUNT LEFT IS : " << bal << endl;
    }
};
int main()
{
    Account s1;
    s1.getAccountInformation();
    s1.display();
    s1.withdraw();
    s1.deposit();
}