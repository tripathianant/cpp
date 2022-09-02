#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    char name[10];
    int age;
    int basic;   
};
int main()
{   
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
    employee emp[100];
    int num;
    cout<<"NUMBER OF EMPLOYEES ARE : ";
    cin>>num;
    cout<<endl<<"ENTER ID , NAME , AGE AND BASIC SALARY : "<<endl;
    for (int i = 0; i < num; i++)
    {       
        cin>>emp[i].id>>emp[i].name>>emp[i].age>>emp[i].basic;
    }
    cout<<"\n";
    float da,hra,total;
    for (int i = 0; i < num; i++)
    {
        da=0.8*emp[i].basic;
        hra=0.1*emp[i].basic;
        total=emp[i].basic+da+hra;
        cout<<"Id: "<<emp[i].id<<" NAME : "<<emp[i].name<<" AGE : "<<emp[i].age<<"BASIC SALARY : "<<emp[i].basic<<" GROSS SALARY : "<<total<<endl;
    }
    return 0;
}