#include<stdio.h>
int main()
{
    float a,b,av;
    printf("ENTER DISTANCE TRAVELLED AND FUEL CONSUMED IN LITRES :");
    scanf("%f%f",&a,&b);
    av=a/b;
    printf("ARAI CLAIMED MILLAGE IS: %f",av);
}