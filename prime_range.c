#include <stdio.h>
#include <string.h>
 
int main()
{
  	int a,b,i,count=0;
  	scanf("%d%d",&a,&b);
  	while(a<=b)
  	{
  	    count=0;
  	    for(i=2;i<=a/2;i++)
  	    {
  	        if(a%i==0)
  	        {
  	            count=1;
  	            break;
  	        }
  	    }
  	    if(count==0)
  	    {
  	        printf("%d ",a);
  	    }
  	    a++;
  	}
  	
  	return 0;
    }
