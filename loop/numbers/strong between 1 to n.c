#include<stdio.h>

int main()
{
    int n,n1,dig,i,sum,p,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        n1=j;
        for(sum=0;n1!=0;n1=n1/10)
        {
            dig=n1%10;
            for(i=1,p=1;i<=dig;i++)
            {
                p=p*i;
            }
            sum=sum+p;
        }
        if(sum==j) printf("%d ",sum);
    }

    return 0;
}
