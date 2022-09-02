#include <stdio.h>
#include<string.h>
int main()
{
    char i = 0, src[100], dst[100];
    printf("ENTER SOURCE STRING: ");
    scanf("%s", src);
    for (i = 0; i < src[i] != '\0'; ++i)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    printf("DESTINATION STRING : %s", dst);
    return 0;
}