//) Write a program that finds all the divisors of a number


#include<stdio.h>

int main()
{
    int n,i,b;
    printf("Enter your number: ");
    scanf("%d", &n);

    if (n<=0)
    {
        printf("Please enter a positive integer\n");
    }

    else
    {
        for(i=1;i<=n/2;i++)
        {
            b=n%i;
            if (b==0)
            {
                printf("%d  ",i);
            }
        }
        printf("%d",n);
    }
return 0;
}
