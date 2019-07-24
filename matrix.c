#include <stdio.h>

int main()
{
     int n,i,j,m;
     int a[20][20],b[20][20],sum[20][20];
     scanf("%d%d",&m,&n);
     printf("First matrix:");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("Second matrix:");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
            sum[i][j]=a[i][j]+b[i][j];
            printf("\t%d",sum[i][j]);
         }
         printf("\n");
     }
    return 0;
}
