#include<stdio.h>
int  factorial(int n)
{
    return(n==1 ? 1:n*factorial(n-1));
}
int main()
{
    int a,fact;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("FACTORIAL VALUE IS = %d",fact);
    return 0;
}