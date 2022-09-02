#include<stdio.h>
struct Sum 
{
    int x, y, z;
};
int main() 
{
    struct Sum s;
    printf("ENTER TWO DISTANCES IN FEET :\n");
    scanf("%d%d", &s.x,&s.y);
    s.z = s.x + s.y;
    printf("TOTAL DISTANCE IS : %d", s.z);
    return 0;
}