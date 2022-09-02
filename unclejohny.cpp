#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
        cin >> n;
        cin >> k;
        k=k-1;
        int arr[n],temp;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }
        int ele=arr[k];
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(arr[j]<arr[i])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        int l=0,h=n;
        int mid=(l+h)/2;
        if(arr[mid]==ele)
        {
            cout << mid+1 << endl;
        }
        else if(arr[mid]>ele)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
	}
	return 0;
}
