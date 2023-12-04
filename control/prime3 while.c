#include <stdio.h>
//bug
int main()
{
    int i=2,num,isPrime=1;
    printf("Enter test number");
    scanf("%d",&num);

    while(i<=num/2){//test factors until half of that number
        if(!(num%i)){
            isPrime=0;
            
            break;
        }i++;
    }
    if(isPrime && num>=2) printf("%d prime",num);
    else printf("%d not prime",num);
    return 0;
}
