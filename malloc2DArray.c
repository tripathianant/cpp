#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,sum=0;
    int (*a)[5];
    printf("ENTER NUMBER OF ROWS:\n");
    scanf("%d",&n);
    printf("ENTER NUMBER OF COLUMNS:\n");
    scanf("%d",&m);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    printf("SUM IS = %d",sum);
    return 0;
}