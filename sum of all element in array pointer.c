#include<stdio.h>
int main()
{
    int i,*ptr,sum=0,arr[5]={2,4,6,8,11};
    ptr=arr+4;
    for(i-0;i<5;i++)
        sum+=*(ptr+i);
    printf("SUM = %d",sum);
    return 0;
}
   