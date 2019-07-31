#include <stdio.h>

int main()
{
  int n,k,i,j,u,v,z=0,min;
  int a[100],b[100];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<k;i++)
  {
      scanf("%d%d",&u,&v);
      min=a[u];
      for(j=u;j<=v;j++)
      {
          if(a[j]<min)
          {
            min=a[j];  
          }
      }
      b[z]=min;
      z++;
  }
 
 for(i=0;i<z;i++)
 {
     printf("%d\n",b[i]);
 }
    return 0;
}
