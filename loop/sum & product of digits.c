
#include <stdio.h>

int main()
{
    int n,d=0,sum, product=1;
    scanf("%d",&n);
    for(;n!=0;) //or n>0 or while
    {   
        d=n%10; //remainder is last digit
        sum=sum+d;
        product=product*d;
        n=n/10; //excludes last digit from number

    }
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    return 0;
}
