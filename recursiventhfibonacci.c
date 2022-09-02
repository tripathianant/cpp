#include <stdio.h>
int fibonacci(int n)
{
    return (n==1||n==2?1:fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int a,b;
    printf("ENTER THE NUMBER WHOSE FIBONACCI POSITION YOU WANT:");
    scanf("%d",&a);
    b=fibonacci(a);
    printf("\n%d IS AT %d IN FIBONACCI SERIES",b,a);
    return 0;
}