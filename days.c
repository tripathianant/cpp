#include<stdio.h>
int main()
{
    int a,y,w,ym,d;
    printf("ENTER NUMBER OF DAYS:");
    scanf("%d",&a);
    y=a/365;
    ym=a%365;
    w=ym/7;
    d=ym%7;
    printf("%d YEARS %d WEEKS %d DAYS",y,w,d);
}