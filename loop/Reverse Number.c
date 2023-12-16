//Write a program that reverses the digits of an integer n.

#include<stdio.h>
int main()
{
    int n,i,b;

    printf("Enter a number:");
    scanf("%d",&n);

    for (;n>0;n=n/10)
    {
        b=n%10;
        printf("%d",b);
    }

return 0;
}
