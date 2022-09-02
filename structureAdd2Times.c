#include<stdio.h>
struct time
{
    int hr,min,sec;
};
int main()
{
    printf("ENTER HOUR , MINUTE , SECOND OF FIRST TIME\n");
    struct time t1,t2;
    scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
    printf("ENTER HOUR , MINUTE , SECOND OF SECOND TIME\n");
    scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
    printf("THE SUM OF TWO TIMES IS %dHOURS %dMINNUTES %dSECONDS\n",t1.hr+t2.hr,t1.min+t2.min,t1.sec+t2.sec);
    return 0;
}