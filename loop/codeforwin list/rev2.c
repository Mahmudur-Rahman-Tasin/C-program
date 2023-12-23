#include<stdio.h>

int main()
{
    int num,rev=0;
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        rev = rev * 10 + num%10 ;
    }
    printf("%d",rev);
    return 0 ;
}
