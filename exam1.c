#include <stdio.h>
int checkPrimeNumber(int n);
int main() 
{
    int n1, n2, i, flag, A[100],k;
    printf("ENTER STARTING AND ENDING RANGE: ");
    scanf("%d %d", &n1, &n2);
    printf("PRIME NUMBER BETWEEN %d AND %d ARE: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) 
    {
        flag = checkPrimeNumber(i);
        if (flag == 1)
        {
            for(k=0;k<=99;k++)
                A[k]=i;
            printf("%d ", A[k]);
    }
    return 0;
}
int checkPrimeNumber(int n) 
{
    int j, flag = 1,a[100],m;
    for (j = 2; j <= n / 2; ++j) 
    {
        if (n % j == 0) 
        {
            flag = 0;
            break;
        }
        else
        {
            for(m=0;m<99;m++)
                a[m]=n;
        }
    }
    return flag;
}