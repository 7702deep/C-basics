#include <stdio.h>

int main()
{
  int n,i,sum=0;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
     sum=sum+a[i];
  }
 
     printf("%d\n",sum);
 
    return 0;
}

