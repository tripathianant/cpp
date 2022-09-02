#include<iostream>
using namespace std;
class Vol
{
    public:
    void volume(int l=2 , int w=3 , int h=4)
    {
        cout << "VOLUME OF CUBOID IS : " << l*w*h << endl;
    }
    void volume (double r)
    {
        cout << "VOLUME OF SPHERE IS : " << 4*3.14*r*r*r << endl;
    }
    void volume (double r , int h)
    {
        cout << "VOLUME OF CYLINDER IS : " << 3.14*r*r*h << endl;
    }
};
int main()
{
    Vol v;
    v.volume();
    v.volume(5.25);
    v.volume(8.5,10);
    return 0;
}