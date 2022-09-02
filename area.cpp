#include <iostream>
using namespace std;
int main()
{
    double area(double);
    double area(double, double);
    int area(int, int);
    cout << "AREA OF CIRCLE : " << area(5.0) << endl;
    cout << "AREA OF RECTANGLE : " << area(2.2, 3.0) << endl;
    cout << "AREA OF TRIANGLE : " << area(2, 3) << endl;
    return 0;
}
double area(double p)
{
    return (3.14 * p * p);
}
double area(double p, double q)
{
    return (p * q);
}
int area(int p, int q)
{
    return (0.5 * p * q);
}