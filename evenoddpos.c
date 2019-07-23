#include <stdio.h>

int main()
    {
     int n,i;
     int a[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
         if(i%2==0)
         {
             printf("%d",a[i]);
         }
         else
         {
             printf("%d",a[i]);
         }
     }

    return 0;
}
