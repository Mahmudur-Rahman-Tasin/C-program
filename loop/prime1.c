
#include <stdio.h>
#include <math.h>

int main(){
    int i,num,isPrime=1;
    scanf("%d",&num);
     if(num <= 1) isPrime = 0;
     
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    }
    
    if(isPrime==1) printf("%d is prime\n",num);
    else printf("%d is not prime\n",num);
        return 0;
    }

    