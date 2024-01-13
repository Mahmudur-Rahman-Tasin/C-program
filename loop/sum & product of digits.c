
#include <stdio.h>

int main()
{
    int n,d,sum,p,i;
    scanf("%d",&n);
    for(i=0,d=0,p=1;n!=0x;i++)
    {
        d=n%10;
        sum=sum+d;                          //sum+=d;
        p=p*d;
        n=n/10;

    }
    printf("No. of digits: %d\n",i);
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",p);
    return 0;
}
