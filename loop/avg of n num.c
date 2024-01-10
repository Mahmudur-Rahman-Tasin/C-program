#include <stdio.h>

int main()
{
    int n,x,sum=0,i;
    double avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    avg= (double)sum/n;                     //typecast
    printf("%lf",avg);
    return 0;
}
