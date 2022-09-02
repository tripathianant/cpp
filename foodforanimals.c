#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,z,a,b;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        scanf("%d",&a);
        scanf("%d",&b);
        if((x+y+z)>=(a+b))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}