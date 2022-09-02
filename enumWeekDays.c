#include<stdio.h>
enum week{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main()
{
    enum week today,WEDNESDAY;
    today=TUESDAY;
    printf("%d\n",WEDNESDAY);
    printf("%d\n",THURSDAY);
    printf("%d\n",THURSDAY+1);
    printf("%d\n",today);
    printf("%d\n",today+1);
    printf("%d",today+4);
}