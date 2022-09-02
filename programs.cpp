#include<iostream>
using namespace std;
int main()
{
    int bs,pa,pd,ns;
    cout<<"ENTER BAASIC SALARY , PRCENTAGE OF ALLOWANCE AAND PERCENTAGE DEDEUCTION";
    cin>>bs>>pa>>pd;
    ns=bs+(bs*pa/100)-(bs*pd/100);
    cout<<"NET SALARY IS:"<<ns;
    return 0;
}