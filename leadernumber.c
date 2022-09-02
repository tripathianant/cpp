#include<stdio.h>
int find_max(int n)
{
    int a,l=0,i;
    for(i=0;i<n;i++)
    {
        printf("\nENTER NEXT NUMBER:");
        scanf("%d",&a);
        if(a>l)
            l=a;
    }
    return(l);
}
int c_l(int n)
{
    int a,l=0,i,c=0;
    for(i=0;i<n;i++)
    {
        printf("\nENTER NEXT NUMBER:");
        scanf("%d",&a);
        if(a>l)
        {
            l=a;
            c++;
        }    
    }
    return(c);
}
int main()
{
    int x,y,z;
    printf("\nENTER NEXT NUMBER:");
    scanf("%d",&x);
    y=find_max(x);
    z=c_l(x);
    printf("LARGEST NUMBER IS\n %d",y);
    printf("LEADERS NUMBER ARE =%d",z);
    return 0;
}