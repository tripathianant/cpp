#include<stdio.h>
int sod(int n)
{
    return(n/10 ? n%10+sod(n/10) : n);
}
int main()
{
    int a,s;
    printf("ENTER ANY NUMBER");
    scanf("%d",&a);
    s=sod(a);
    printf("SUM OF DIGHITS ARE = %d",s);
    return 0;
}