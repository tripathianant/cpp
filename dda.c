#include <stdio.h>
int main()
{
    int i,j,ctr=0,A[3][4];
    for(i=0;i<4;i++)
    for(j=0;j<3;j++)
    {
        A[j][i] = ctr;
        ++ctr;
    }
    printf("%d",A[1][1]);
}