#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    char str[20];
    printf("ENTER STRING:\n");
    gets(str);
    n = strlen(str);
    printf("REVERSED STRING IS : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}