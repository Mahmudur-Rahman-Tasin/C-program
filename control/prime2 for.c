#include <stdio.h>

int main()
{
    int i,num,isPrime=1;
    printf("Enter test number");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++){//test factors until half of that number
        if(!(num%i)){
            isPrime=0;
            break;
        }
    }
    if(isPrime && num>=2) printf("%d prime",num);
    else printf("%d not prime",num);
    return 0;
}
