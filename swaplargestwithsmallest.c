#include<stdio.h>
void swap(int n[],int a){
    int max,min,temp,Mxind,Minind;
    max=0;
    min=9;
    for (int i = 0; i < a; i++)
    {
        if(n[i]>max){
            max=n[i];
            Mxind=i;
            }
        if(n[i]<min)
        {
            min=n[i];
            Minind=i;
        }            
    }
    temp=n[Mxind];
    n[Mxind]=n[Minind];
    n[Minind]=temp;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",n[i]);
    }
}
int main()
{
    int b;
    int arr[b];
    printf("ENTER LENGTH OF ARRAY : ");
    scanf("%d",&b);
    printf("ENTER ELEMENTS : ");
    for (int i = 0; i < b; i++)
    {       
        scanf("%d",&arr[i]);
    }
    printf("\nBEFORE SWAP : \n");
    for (int i = 0; i < b; i++)
    {
        printf("%d ",arr[i]); 
    }
    printf("\nAFTER SWAP : \n");
    swap(arr,b);
    return 0;
}