#include<stdio.h>
int main()
{
    int i,a[10],m=0;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("LARGEST NUMBER IS: %d\n",m);
    for(i=0;i<8;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    printf("SMALLEST NUMBER IS: %d",m);
}