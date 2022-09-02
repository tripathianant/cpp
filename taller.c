#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        if (x>y)
        {
            printf("x");
        }
        else
            printf("y");
    }  
}