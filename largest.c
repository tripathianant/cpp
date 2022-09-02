#include <stdio.h>
void main()
{
    int a, b, c;
    printf("ENTER THREE NUMBERS : ");
    scanf("%d%d%d", &a, &b, &c);
    switch (a > b)
    {
    case 0:
    {
        switch (b > c)
        {
        case 0:
            printf("LARGEST NUMBER IS : %d", c);
            break;
        case 1:
            printf("LARGEST NUMBER IS : %d", b);
            break;
        }
        break;
    }
    case 1:
    {
        switch (a > c)
        {
        case 0:
            printf("LARGEST NUMBER IS : %d", c);
            break;
        case 1:
            printf("LARGEST NUMBER IS : %d", a);
            break;
        }
        break;
    }
    }
}