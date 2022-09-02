#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b[10],as,bs,i,j,k=0;
    printf("ENTER SIZE OF FIRST ARRAY : ");
    scanf("%d",&as);
    printf("ENTER FIRST ARRAY\n");
    for(i=0 ; i<as ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER SIZE OF SECOND ARRAY : ");
    scanf("%d",&bs);
    printf("ENTER SECOND ARRAY\n");
    for(j=0 ; j<bs ; j++)
    {
        scanf("%d",&b[j]);
    }
    printf("FIRST ARRAY IS : ");
    for(i=0 ; i<as ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSECOND ARRAY IS : ");
    for(j=0 ; j<bs ; j++)
    {
        printf("%d ",b[j]);
    }
    int c[20];
    i=0;
    j=0;
    while(k<=(as+bs))
    {
        if(i<=k)
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    printf("\nMERGED ARRAY IS : ");
    for(k=0 ; k<(as+bs) ; k++)
    {
        printf("%d ",c[k]);
    }
}