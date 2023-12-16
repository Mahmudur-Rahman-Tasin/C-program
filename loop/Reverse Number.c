//Write a program that reverses the digits of an integer n.

#include<stdio.h>
int main()
{
    int n,i,b=0,c=0;

    printf("Enter a number:");
    scanf("%d",&n);

    for (;n!=0;)
    {
        c=c*10;
        b=n%10;
        c=c+b;
        n=n/10;
    }
    printf("%d  ",c);





return 0;
}
