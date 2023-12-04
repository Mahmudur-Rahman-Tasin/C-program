#include <stdio.h>

int main()
{
    int i,num,isPrime=1;
    printf("Enter test number");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++){//test factors until half of that number
        if(!(num%i)){//num%i==0
            isPrime=0;
            break;//further check not needed
        }
    }
    if(isPrime && num>=2) 
        printf("%d prime",num);
    else 
        printf("%d not prime",num);//only 1 and num div
    return 0;
}
