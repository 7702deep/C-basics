 #include <stdio.h>

int main()
    {
    int n,i,j,dup=0;
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
            if(a[i]<a[j])
            {
                dup=a[i];
                a[i]=a[j];
                a[j]=dup;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
