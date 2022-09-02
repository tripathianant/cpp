#include <stdio.h> 
int main() 
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,s=0,ld,fd;
        scanf("%d",&n);
        ld=n%10;
        while(n>=10)
        {
            n=n/10;
        }
        fd=n;
        s=fd+ld;
        printf("%d\n",s);
    }
    return 0;
}