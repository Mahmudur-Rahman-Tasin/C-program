
#include <stdio.h>

int main()
{
    int n,d=0,sum, product=1;
    scanf("%d",&n);
    for(;n!=0;)
    {   
        d=n%10;
        sum=sum+d;
        product=product*d;
        n=n/10;

    }
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    return 0;
}
