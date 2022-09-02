#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a = 3.14567;
    string name = "KIIT";
    cout << a << " then " << setprecision(4.2) << a << endl;
    cout << name << " then " << setw(10) << name << endl;
    cout << name << " then " << setfill('*') << setw(10) << name << endl;
    return 0;
}