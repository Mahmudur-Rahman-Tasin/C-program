#include<stdio.h>

//Swap

int main()
{
    int a,b;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("a: %d\nb: %d",a,b);
}
