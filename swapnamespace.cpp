#include <iostream>
using namespace std;
namespace first
{
    void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
}
namespace second
{
    void swap(char &x, char &y)
    {
        char temp;
        temp = x;
        x = y;
        y = temp;
    }
}
int main()
{
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
    int a,b;
    cout << "ENTER TWO NUMBERS : " << endl;
    cin >> a >> b;
    cout << "BEFORE SWAP" << endl;
    cout << "VALUE OF a IS " << a << " AND b IS " << b << endl;
    first::swap(a, b);
    cout << "AFTER SWAP\nVALUE OF a IS " << a << " AND b IS " << b << endl;
    char x = 'A', y = 'B';
    cout << "\nx IS " << x << " AND y IS " << y << endl;
    second::swap(x, y);
    cout << "AFTER SWAP x IS " << x << " AND y IS " << y << endl;
    return 0;
}