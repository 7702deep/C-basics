#include<stdio.h>
int main(void)
{
	int a[100],i,j,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)                     
		for(j=i+1;j<n;j++)
		{
			if(i%2)                  
			{  if(a[i]>a[j])
				a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
			else                  
			{
				if(a[i]<a[j])   
					a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
		} 
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);       
	printf("\n");
	return 0;
}
