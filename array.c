#include<stdio.h>
int main()
{
    int a[10]={3,0,7,1,2,8,9,2,12,9};
    int x,y,z;
    x=++a[2];
    y=a[2]++;
    z=a[x++];
    printf("%d %d %d",x,y,z);
}