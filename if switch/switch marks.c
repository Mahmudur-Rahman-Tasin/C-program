#include<stdio.h>
int main()
{
    int n,c;
    printf("enter marks:");
    scanf("%d",&n);
    if(n<100&&n>0)
    {
        c=(80<=n&&n<=100)+(70<=n&&n<=79)+(60<=n&&n<=69)+(50<=n&&n<=59)+(40<=n&&n<=49);
        switch(c)
        {
        case 5:
            printf("A+");
            break;
        case 4:
            printf("A");
            break;
        case 3:
            printf("B");
            break;
        case 2:
            printf("C");
            break;
        case 1:
            printf("D");
            break;
        default :
            printf("F");
        }

    }
    else{printf("not valid");}
}