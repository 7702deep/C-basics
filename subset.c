#include <stdio.h>

int main()
{
     int n,m,i,j,count=0;
     int a[20],b[20];
     scanf("%d %d",&n,&m);
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
         if(a[i]==b[j])
        {
            count=1;
            break;
        }
         }
            
        }
 if(count==1)
 {
    printf("Yes"); 
 }       
 else
 {
     printf("NO");
 }
 return 0;
 }
