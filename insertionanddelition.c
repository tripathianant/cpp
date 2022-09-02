#include<stdio.h>
void insert(int a[100] , int k)
{
    printf("INSERTION\n");
    int i,n=5,e=17;
    i=n;
    while(i>k)
    {
        a[i]=a[i-1];
        i--;
    }
    a[k]=e;
    for(i=0 ; i <=n ; i++)
    {
        printf("%d ",a[i]);
    }
}
void delete(int b[100] , int l)
{
    printf("\nDELETION\n");
    int i,n=5;
    i=0;
    while(i=l)
    {
        b[i]=b[i+1];
    }
    i++;
    for(i=0 ; i <=n ; i++)
    {
        printf("%d ",b[i]);
    }
}
int main()
{
    int a[100]={10,15,20,25,30};
    int k=2;
    int b[100]={10,15,20,25,30};
    int l=2;
    insert(a,k);
    delete(b,l);
    return 0;
}