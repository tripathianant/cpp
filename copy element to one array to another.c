#include<stdio.h>
int main()
{
    int i,a[10],n[10];
    for(i=0;i<5;i++)
    {
        printf("ENTER NUMBER:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        n[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d , ",n[i]);
    }
    return 0;
}