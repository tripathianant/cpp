#include <stdio.h> 
int main() 
{
	int T;
	scanf("%d", &T);
	while (T--) 
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
        if (a>b && a>c)
        {
            if(b>c)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",c);         
            }
        }
        if (b>a && b>c)
        {
            if(a>c)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",c);         
            }
        }
        if (c>b && c>a)
        {
            if(a>b)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",b);         
            }
        }
    }
    return 0;
}
    