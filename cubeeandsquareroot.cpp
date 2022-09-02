#include <iostream>
using namespace std;
class number
{
public:
    inline int square(int n)
    {
        return n * n;
    }
    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    int num, sq;
    number x;
    cout << "ENTER THE NUMBER : \n";
    cin >> num;
    sq = x.square(num);
    cout << "SQUARE IS = " << sq << endl;
    sq = x.cube(num);
    cout << "CUBE IS = " << sq << endl;
    return 0;
}