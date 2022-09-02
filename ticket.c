#include <stdio.h>
int main()
{
    int t;
    int r1=0,r2=0;
    scanf("%d",&t);
    while (t-->0)
    {
      int n; //no. of boxes
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++) scanf("%d",&a[i]);
      int mn=1e8; 
      for(int i=0;i<n;i++){
          if(a[i]<mn) mn=a[i];
      }
      int ans=0;
      for(int i=0;i<n;i++){
        ans+=(a[i]-mn);
      }
      printf("%d",ans);
    }
    return(0);
}