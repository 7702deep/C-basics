
        #include <stdio.h>

int main()
    {
    int n,i,j,count=0,temp=-1;
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
            if(a[i]==a[j])
            {
                count=a[j];
                temp=j;
                break;
                
            }
        }
        if(temp!=-1)
        break;
    }
    if(temp!=-1)
    {
        printf("%d",count);
    }
    

    return 0;
}
        
       
