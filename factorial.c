#include <stdio.h>
void factorial(int a)
{
    int n=1,i;
    for(i=1;i<=a;i++)
    {
        n = n * i;
    }
    printf("FACTORIAL IS : %d\n", n);
}
int main()
{
    int x;
    printf("ENTER NUMBER:");
    scanf("%d",&x);
    factorial(x);
    return 0;
}