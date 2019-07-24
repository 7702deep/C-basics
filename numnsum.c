#include <stdio.h>

int main()
{
     int n,i,j,sum=0;
     int a[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
        sum=a[i]+a[j];
        if(sum==0)
        {
            printf("%d %d",a[i],a[j]);
        }
     }
    }
      return 0;
}
