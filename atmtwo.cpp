#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    int arr[n];
	    cin >> n;
	    cin >> k;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i=0 ; i<n ; i++)
	    {
	        if(k >= arr[i])
	        {
	            cout << 1 ;
	            k=k-arr[i];
	        }
	        else
	        {
	            cout << 0 ;
	        }
	    }
	}
	return 0;
}
