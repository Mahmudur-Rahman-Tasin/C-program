#include <stdio.h>
int deci(int num);
int main()
{
    int bina;
    printf("Enter the Binary number:");
    scanf("%d",&bina);
    printf("The decimal is %d", deci(bina));
    return 0;
}
int deci(int num)
{
    if(num==0) return 0;
    return num%10+2*deci(num/10);
}