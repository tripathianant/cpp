#include<iostream>
using namespace std;
int main()
{
    int n=10,l=0,h=9, nums[100],target,mid;
    for (int i=0 ; i<10 ; i++)
    {
        cin >> nums[i];
    }
    cin>>target;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(target==nums[mid])
        {
            cout << mid << endl;
            return 0;
        }
        else if(target<nums[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << -1;
    return 0;
}