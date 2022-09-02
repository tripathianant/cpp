#include <stdio.h>
void amstrong(int x)
{
    int c, r, result = 0;
    c = x;
    while (c != 0) 
    { 
        r = c % 10;
        result = result + (r * r * r);
        c /= 10;
    }
    if (result == x)
        printf("%d IS AN AMSTRONG NUMBER", x);
    else
        printf("%d IS NOT AN AMSTRONG NUMBER", x);
}
int main() 
{
    int num;
    printf("ENTER NUMBER:");
    scanf("%d",&num);
    amstrong(num);
    return 0;
}