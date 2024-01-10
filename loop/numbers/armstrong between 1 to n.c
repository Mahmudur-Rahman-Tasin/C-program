#include<stdio.h>

int main()
{
    int n,i,j,sum=0,p,dig,n1,n2,n3,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        n1=k;
        n2=k;
        n3=k;

        for(i=0;n3!=0;i++)
        {
            n3=n3/10;
        }
        for(sum=0;n1!=0;n1=n1/10)
        {
            dig=n1%10;
            for(p=1,j=1;j<=i;j++)
            {
                p=p*dig;
            }
            sum=sum+p;
        }
        if(sum==n2) printf("%d ",sum);
    }

    return 0;
}
