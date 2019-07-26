#include <stdio.h>
#include<string.h>

int main()
{
  int i,j,l,p,c=0,f=0;
  char a[100],b[100];
  scanf("%s\n",a);
  scanf("%s",b);
  for(i=0;b[i]!='\0';i++)
  l=i;
  for(i=0;a[i]!='\0';i++)
  {
      c=0;
      if(a[i]!=b[i])
      {
          p=i;
          for(j=0;j<l;j++)
          {
              if(a[p]==b[j])
              {
                  c++;
                  p++;
              }
          }
          if(c==1)
          {
              printf("%d",i-1);
              f=1;
              break;
          }
     }
 }
          if(f==0)
          {
              printf("-1");
          }
      
  
  
    return 0;
}
