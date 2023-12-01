#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n%2==0)
        printf("Divisible by 2\n");
    if(n%3==0)
        printf("Divisible by 3\n");
    if(n%5==0)
        printf("Divisible by 5\n");
    if(n%2!=0 && n%3!=0 && n%5!=0)
        printf("Not Divisible by 2,3,5\n");


    return 0;
}
