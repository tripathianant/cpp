#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a , b , si  =0 , di = 0 ;
    float x, y , sf = 0 ,  df  = 0;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    si = a+b;
    di= a-b;
    sf = x+y;
    df= x-y;
    printf("%d %d \n",si , di);
    printf("%0.1f %0.1f",sf , df);

    return 0;
}