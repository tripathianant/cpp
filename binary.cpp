#include<iostream>
using namespace std;
int main()
{
    int n=10,l=0,h=9,target,mid;
    int nums[6]={-1,0,3,5,9,12};
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