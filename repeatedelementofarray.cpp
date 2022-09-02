#include <iostream>
using namespace std;
int main()
{
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
    int a[10];
    cout << "ENTER ELEMENTS OF ARRAY : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int count,n,j;
    for (int i = 0; i < 10; i++)
    {
        if(i==9){
            break;
        }
        n = a[i];
        j = i;
        count = 0;
        while (a[j] == n)
            {
                count++;
                j++;
            }
        if (count > 1 )
            cout <<"\n"<< n << " IS PRESENT " << count << " TIMES" << endl;
        i = j - 1;
    }
    return 0;
}