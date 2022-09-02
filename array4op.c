#include<stdio.h>
int main()
{
    int n,max=a[0],min=a[0],sum=0,avg;
    int arr[n];
    printf("ENTER LENGTH OF AN ARRAY : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("ENTER %d ELEMENT : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("MAXIMUM NUMBER : %d \nMINIMUM NUMBER : %d \nSUMMATION : %d \nAVERAGE : %d",max,min,sum,avg);
}