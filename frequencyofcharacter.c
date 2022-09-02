#include<stdio.h>
#include<string.h>
int main()
{
    char b[100],ch,i,c=0;
    printf("ENTER STRING:\n");
    gets(b);
    printf("ENTER CHARACTER:\n");
    scanf("%c",&ch);
    while(b[i])
        if(ch==b[i++])
            ++c;
    printf("FREQUENCY OF %c IS = %d",ch,c);
    return 0;
}