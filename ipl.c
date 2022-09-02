#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,a=0;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        a=(y-x)*2;
        if(a>=z)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}