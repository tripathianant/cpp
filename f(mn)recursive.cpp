#include <iostream>
using namespace std;
int compute(int m, int n)
{
    if (m == 0 || (m >= n && n >= 1))
        return 1;
    else
        return compute(m, n - 1) + compute(m - 1, n - 1);
}
int main()
{
    int m, n;
    cout << "Enter the parameters m and n for F(m,n) :  ";
    cin >> m >> n;
    int result = compute(m, n);
    cout << "\n\nYour result is: " << result << endl;
    return 0;
}