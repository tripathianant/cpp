#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,s=0;
        scanf("%d",&x);
        scanf("%d",&y);
        if ((x*3)<(y*2))
        {
            s=x*3;
            printf("%d\n",s);
        }
        else if ((x*3)>(y*2))
        {
            s=y*2;
            printf("%d\n",s);
        }
        else
        {
            s=x*3;
            printf("%d\n",s);
        }    
    }  
}