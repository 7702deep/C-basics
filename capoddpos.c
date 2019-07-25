#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,len=0;
    char str[100];
    scanf("%s",&str);
    //scanf("%d",&n);
    len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(i%2==0)
        {
            str[i]=str[i]-32;
        }
    }
    
    
    printf("%s",str);

    return 0;
}
