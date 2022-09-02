#include<stdio.h>
struct student
     {
         char name[20];
         float marks;
         int rn;
     };
int main()
{
    struct student b[10];
    int i;
    for(i=0;i<=5;i++)
    {
        printf("ENTER NAME , MARKS AND ROLL NO.\n");
        scanf("%s%f%d",b[i].name,&b[i].marks,&b[i].rn);
    }
    for(i=0;i<=5;i++)
        printf("%s  %f  %d\n",b[i].name,b[i].marks,b[i].rn);
    return 0;
}