#include<stdio.h>

int main()
{
    int n,n1,dig,i,sum,p;
    scanf("%d",&n);
    n1=n;
    
    for(sum=0;n1!=0;n1=n1/10)
    {
        dig=n1%10;
        for(i=1,p=1;i<=dig;i++)
        {
            p=p*i;
        }
        sum=sum+p;
    }
    if(sum==n) printf("%d",sum);

    return 0;
}
