#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=2;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        for(int i=1 ; i<n ; i++)
        {
            if(s[i]==s[i-1])
            {
                c=c+1;
            }
            else
            {
                c=c+2;
            }
        }
        cout << c << endl;
    }
    return 0;
}
