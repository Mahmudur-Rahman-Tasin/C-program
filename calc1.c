#include<stdio.h>

//Simple Calculator for arithmetic operation

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Add: %d\n",a+b);
    printf("Sub: %d\n",a-b);
    printf("Mul: %d\n",a*b);
    printf("Div: %d\n",a/b);
    printf("Mod: %d",a%b);

    return 0;
}
