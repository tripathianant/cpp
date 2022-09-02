#include<iostream>
using namespace std;
class emp
{
    public:
    int id,bs,age,gs;
    char name[25];
    void get()
    {
        cout << " ENTER NAME OF EMPLOYEE : " << endl;
        cin >> name;
        cout << " ENTER AGE OF EMPLOYEE : " << endl;
        cin >> age;
        cout << " ENTER EMPLOYEE ID : " << endl;
        cin >> id;
    }
    void gross_salary()
    {
        cout << "ENTER YOUR SALARY" << endl;
        cin >> bs;
        gs = bs + (0.80*bs) + (0.10*bs);
    }
    void display()
    {
        cout << "NAME OF EMPLOYEE IS : " << name << "\t";
        cout << "EMPLOYEE ID IS : " << id << "\t";
        cout << "AGE OF EMPLOYEE IS : " << age << "\t";
        cout << "GROSS SALARY OF EMPLOYEE IS :" << gs << endl;
    }
};
int main()
{
    int gs;
    emp e1,e2; 
    cout << "EMPLOYEE 1 " << endl;
    e1.get();
    e1.display();
    gs=e1.gross_salary();
    cout << "GROSS SALARY OF EMPLOYEE 1 IS :" << gs << endl;
    cout<<"EMPLOYEE 2"<<endl;
    e1.get();
    e1.display();
    gs=e2.gross_salary();
    cout << "GROSS SALARY OF EMPLOYEE 2 IS :" << gs << endl;
    return 0;
}