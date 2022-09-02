#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,z,s=0;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        s=x*y*z;
        printf("%d\n",s);
    }  
}