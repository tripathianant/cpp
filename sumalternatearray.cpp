#include <iostream>
using namespace std;
int main()
{
    int a[10], es = 0, os = 0;
    cout << "ENTER ELEMENTS OF ARRAY : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            es = es + a[i];
        else
            os = os + a[i];
    }
    cout << "SUM OF ALL EVEN NUMBERS ARE : " << es << endl;
    cout << "SUM OF ALL ODD NUMBERS ARE : " << os << endl;
    return 0;
}