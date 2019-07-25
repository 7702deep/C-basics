#include <stdio.h>
#include <string.h>
 
int main()
{
    int n,i,j,maxsum=0,sum=0;
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
            
        }
       
    }
    
    printf("%d",sum);
    return 0;
    }
