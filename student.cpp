#include<bits/stdc++.h>
using namespace std;
class Student
{
    int rn;
    string name;
    int m1,m2,m3,m4,m5;
    int avg;
    public:
    void get()
    {
        cout << "ENTER ROLL NUMBER OF STUDENT : " << endl;
        cin >> rn;
        cout << "ENTER NAME OF STUDENT : " << endl;
        cin >> name;
        cout << "ENTER MARKS OF 5 SUBJECTS : " << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
    void display()
    {
        cout << "ROLL NUMBER IS : " << rn << endl;
        cout << "NAME OF STUDENT IS : " << name << endl;
        cout << "TOTAL MARKS ARE : " << m1+m2+m3+m4+m5 << endl;
    }
    void findAvg()
    {
        avg=(m1+m2+m3+m4+m5)/5;
        cout << "AVERAGE MARKS ARE : " << avg << endl;
    }
};
int main()
{
    Student s1,s2;
    s1.get();
    s1.display();
    s1.findAvg();
    s2.get();
    s2.display();
    s2.findAvg();
}