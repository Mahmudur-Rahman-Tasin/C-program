#include<stdio.h>

int main()
{
    int n,i,j,prime;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            for(j=2,prime=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1) printf("%d ",i);
        }
    }


    return 0 ;
}
