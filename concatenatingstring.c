#include<stdio.h>
#include<string.h>
int length(char *s)
{
    int k=-1;
    while(s[++k]);
    return k;
}
int main()
{
    char s1[100],s2[100],ch;
    int i,j;
    printf("ENTER FIRST STRING:\n");
    scanf("%s",s1);
    scanf("%c",&ch);
    printf("ENTER SECOND STRING:\n");
    scanf("%s",s2);
    i=0;
    j=length(s1);
    while(s1[j++]=s2[i++]);
    printf("AFTER CONCATENATION : %s",s1);
    return 0;
}