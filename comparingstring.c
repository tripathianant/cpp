#include <stdio.h>
#include<string.h>
int compare(char *a, char *b)
{
    int flag = 0;
    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
        {
            flag = 1;
        }
        a++;
        b++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}
int main()
{
    char str1[20];
    char str2[20];
    char ch;
    printf("ENTER FIRST STRING : ");
    scanf("%s", str1);
    scanf("%c", &ch);
    printf("ENTER SECOND STRING : ");
    scanf("%s", str2);
    int a = compare(str1, str2);
    if (a == 0)
        printf("EQUAL STRINGS");
    else
        printf("UNEQUAL STRINGS");
    return 0;
}
