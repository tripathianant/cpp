#include <stdio.h>
int main() 
{
    int m;
    float i,s=0;
    scanf("%d",&m);
    scanf("%f",&i);
    if(m>(i-0.50))
    {
        printf("%.2f",i);
    }
    else if((m%5)==0)
    {
        float mm=m*1.0;
        s=i-(mm+0.50);
        printf("%.2f",s);
    }
    else if((m%5)!=0)
    {
        printf("%.2f",i);
    }
    return 0;
}