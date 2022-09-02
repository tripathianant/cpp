#include <stdio.h>
void palindrome(int n)
{
    int a=0;
    int c=n;
    while(n!=0)
    {
        a=a*10;
        a=a+n%10;
        n=n/10;
    }
    if(a==c)
        printf("PALINDROME NUMBER");
    else
        printf("NOT PALINDROME");
}
int main()
{
    int x;
    printf("ENTER A NUMBER");
    scanf("%d",&x);
    palindrome(x);
    return 0;
}