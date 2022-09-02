#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    printf("ENTER STRING:");
    gets(str);
    while(str[i]!='\0')
        ++i;
    printf("LENGTH OF STRING IS: %d",i);
    return 0;
}