#include<stdio.h>
void decbin(int n)
{
    if(n<=0)
    {
        return;
    }
    else
    {
        decbin(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    decbin(num);
    return 0;
}
