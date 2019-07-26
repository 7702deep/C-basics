#include <stdio.h>
#include<string.h>

int main()
{
  int a,b,i=0;
  scanf("%d%d",&a,&b);
  while(a>=b)
  {
      a=a-b;
      i++;
  }
  printf("%d",i);
    return 0;
}
