#include<iostream>
using namespace std;
class Dist2;
class Dist1
{
    int f,i;
    int m,c;
    public:
    void get()
    {
        cout << "ENTER FEET AND INCH OF FIRST CLASS" << endl;
        cin >> f >> i;
        cout << "ENTER METRE AND CENTIMETRE OF FIRST CLASS" << endl;
        cin >> m >> c;
    }
    friend void compare1( Dist1 d1 , Dist2 d2 );
    friend void compare( Dist1 d1 , Dist2 d2 );
};
class Dist2
{
    int f,i;
    int m,c;
    public:
    void get()
    {
        cout << "ENTER FEET AND INCH OF SECOND CLASS" << endl;
        cin >> f >> i;
        cout << "ENTER METRE AND CENTIMETRE OF SECOND CLASS" << endl;
        cin >> m >> c;
    }
    friend void compare1( Dist1 d1 , Dist2 d2 );
    friend void compare( Dist1 d1 , Dist2 d2 );
};
void compare1(Dist1 d1 , Dist2 d2)
{
    if (d1.f == d2.f)
    {
        if(d1.i == d2.i)
        {
            cout << "FEET AND INCHES ARE EQUAL" << endl;
        }
        if(d1.i > d2.i)
        {
            cout << d1.f <<"'"<<d1.i <<"'' IS GREATER" << endl;
        }
        if(d1.i < d2.i)
        {
            cout << d2.f <<"'"<<d2.i <<"'' IS GREATER" << endl;
        }
    }
    else if (d1.f > d2.f)
    {
        cout << d1.f <<"'"<<d1.i <<"'' IS GREATER" << endl;
    }
    else
    {
        cout << d2.f <<"'"<<d2.i <<"'' IS GREATER" << endl;
    }
}
void compare(Dist1 d1 , Dist2 d2)
{
    if (d1.m == d2.m)
    {
        if(d1.c == d2.c)
        {
            cout << "METRE AND CENTIMETRE ARE EQUAL" << endl;
        }
        if(d1.c > d2.c)
        {
            cout << d1.m <<"m"<<d1.c <<"cm IS GREATER" << endl;
        }
        if(d1.c < d2.c)
        {
            cout << d2.m <<"m"<<d2.c <<"cm IS GREATER" << endl;
        }
    }
    else if (d1.m > d2.f)
    {
        cout << d1.m <<"m"<<d1.c <<"cm IS GREATER" << endl;
    }
    else
    {
        cout << d2.m <<"m"<<d2.c <<"cm IS GREATER" << endl;
    }
}
int main()
{
    Dist1 d1;
    Dist2 d2;
    d1.get();
    d2.get();
    compare1(d1,d2);
    compare(d1,d2);
    return 0;
}
