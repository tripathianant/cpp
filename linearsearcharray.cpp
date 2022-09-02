#include<iostream>
using namespace std;
int main()
{
    int A[7]={4,8,6,9,5,2,7};
    int n,se,flag=0;
    cout<<"Input search element : ";
    cin>>se;
    for(int i=0 ; i<7 ; i++)
    {
        if(A[i]==se)
        {
            n=i;
            flag=1;
            cout<<"Search element is found at "<<n <<"position";
        }
    }
    if(flag==0)
    {
        cout<<"Not Found";
    }
    return 0;
}