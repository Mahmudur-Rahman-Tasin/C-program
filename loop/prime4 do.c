#include <stdio.h>

int main()
{
    int i=3,num,isPrime=1;
    printf("Enter test number");
    scanf("%d",&num);

    do{//test factors until half of that number
        if(!(num%i)){
            isPrime=0;
            break;
        }
        i++;
    } while(i<=num/2);
    if(isPrime && num>=2)
        printf("%d prime",num);
    else
        printf("%d not prime",num);
    return 0;
}
