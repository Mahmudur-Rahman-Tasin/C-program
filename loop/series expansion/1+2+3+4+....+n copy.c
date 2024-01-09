
#include <stdio.h>

int main()
{
    int sum=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        sum=sum+i;
        if(i==n)
        {
            printf("=%d",sum);
        }
        else printf("+");
    }
    return 0;
}
