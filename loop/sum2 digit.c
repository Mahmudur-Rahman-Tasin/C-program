
#include <stdio.h>

int main()
{
    int n,r,d=0,sum;
    scanf("%d",&n);
    for(;n!=0;) //or n>0 or while
    {   
        d=n%10; //remainder is last digit
        sum=sum+d;
        n=n/10; //excludes last digit from number

    }
    printf("%d",sum);
    return 0;
}
