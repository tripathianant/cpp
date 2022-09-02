#include <stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("ENTER BASIC SALARY: \n");
    scanf("%f",&bs);
    if(bs<1500)
    {
        gs=bs+(bs*0.1)+(bs*0.4);
    }
    else
    {
        gs=bs+500+(bs*0.5);
    }
    printf("GROSS SALARY IS $%f",gs);
    return 0;
}