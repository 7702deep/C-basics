#include <stdio.h>

int main()
{
  int n,i,j,c=0;
  int t[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&t[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          
          if(a[i]<t[j])
          {
              c=t[i];
              t[i]=t[j];
              t[j]=c;
          }
          
          
      
          
      }
  }
  for(i=0;i<n;i++)
  {
      printf("%d",t[i]);
  }
  
    return 0;
}
