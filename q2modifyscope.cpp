#include <iostream>
using namespace std;
class demonstrate
{
public:
    inline int square(int);
    inline int cube(int);
};
inline int demonstrate::square(int a)
{
    return a * a;
}
inline int demonstrate::cube(int a)
{
    return a * a * a;
}
int main()
{
    demonstrate a;
    int x;
    cout << "ENTER NUMBER : " << endl;
    cin >> x;
    cout << "SQUARE IS " << a.square(x) << " AND CUBE IS " << a.cube(x) << endl;
    return 0;
}