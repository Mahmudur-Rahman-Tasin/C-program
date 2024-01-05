#include<stdio.h>

int main()
{
    int n,rev=0,last;
    scanf("%d",&n);
    for(;n!=0;n=n/10)
    {
        last=n%10;
        rev = rev * 10 + last;
    }
    printf("%d",rev);
    return 0 ;
}
