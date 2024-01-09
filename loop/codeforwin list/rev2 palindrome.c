#include<stdio.h>

int main()
{
    int n,rev=0,last,num;
    scanf("%d",&n);
    num=n;
    for(;n!=0;n=n/10)
    {
        last=n%10;
        rev = rev * 10 + last;
    }
    printf("%d ",rev);
    if(rev==num) printf("Palindrome");
    return 0 ;
}
