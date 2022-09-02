#include <stdio.h>
void fibonaci(int x)
{
    int i;
    int a1 = 0, a2 = 1;
    int a3 = a1 + a2;
    printf("%d, %d, ", a1, a2);
    for (i = 3; i <= x; ++i)
    {
        printf("%d, ", a3);
        a1 = a2;
        a2 = a3;
        a3 = a1 + a2;
    }
}
int main()
{
    int num;
    printf("ENTER NUMBER:");
    scanf("%d",&num);
    fibonaci(num);
    return 0;
}