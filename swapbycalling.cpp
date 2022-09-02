#include <iostream>
using namespace std;
int a = 2, b = 3; 
void swapValue(int a, int b)
{
    int temp;
    cout << "Before swap, a= " << a << " b= " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap, a= " << a << " b= " << b << endl;
}
void swapRef(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapAdd(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    swapValue(a, b);
    int x = 20, y = 30;
    cout << "Before swap, x= " << x << " y= " << y << endl;
    swapRef(&x, &y);
    cout << "After swap, x= " << x << " y= " << y << endl;
    int a1 = 50, a2 = 60;
    cout << "Before swap, a1= " << a1 << " a2= " << a2 << endl;
    swapAdd(a1, a2);
    cout << "After swap, a1= " << a1 << " a2= " << a2 << endl;
    return 0;
}