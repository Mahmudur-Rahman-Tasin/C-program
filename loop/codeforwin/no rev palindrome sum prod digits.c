#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,prod=1,num,num1,num2,digit,i,j,rev=0;
    scanf("%d",&num);

    num2=num;
    num1=num;
    for(j=1;num2/10!=0;j++)
    {
        num2=num2/10;
    }
    printf("%d",j);

    for(;num!=0;num=num/10,j--)
    {
        digit=num%10;
        sum=sum+digit;
        prod=prod*digit;
        rev=rev+digit*pow(10,j-1);
    }
    if (rev==num1) printf(" Palindrome ");
    printf(" %d %d %d",rev,sum,prod);
    return 0;
}
