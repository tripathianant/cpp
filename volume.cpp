#include <iostream>
using namespace std;
int main()
{
    double vol(double);
    double vol(double, double);
    int vol(int,int,int);
    cout << "VOLUME OF SPHERE : " << vol(5.0) << endl;
    cout << "VOLUME OF CYLINDER : " << vol(2.0, 3.0) << endl;
    cout << "VOLUME OF CUBOID : " << vol(2,3,4) << endl;
    return 0;
}
double vol(double p)
{
    return (4.18 * p * p);
}
double vol(double p, double q)
{
    return (3.14*p*p*q);
}
int vol(int p, int q, int r)
{
    return (p * q * r);
}