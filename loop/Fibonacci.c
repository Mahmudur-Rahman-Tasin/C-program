#include<stdio.h>

int main()
{
    int first=0, second=1, count=0, fibo, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(;count<n;count++)
    {
        if(count<=1)
        {
            fibo=count; // count 0 1 first two terms default. first 0 second 1 dhorlam.
        }

        else
        {
            fibo=first+second; //count=2 means third term hobe ager duitar sum
            first=second; //0 bad, porer term first 
            second=fibo; // 1 bad, porer term second jeta ashole ager duitari sum so=fibo
        }

        printf("%d  ",fibo);
        
    }
}
