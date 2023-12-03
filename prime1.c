
#include <stdio.h>
#include <math.h>

int main(){
    int i,num,isPrime=1;//flag variable
    scanf("%d",&num);
     if(num <= 1) isPrime = 0;  // 0 and 1 are not prime numbers
     
    for(i=2;i<=sqrt(num);i++){//i factor counter or sqrt
        if(num%i==0){isPrime=0;break;}//6 er factor paisi,tai nonprime
    }
        if(isPrime==1) printf("%d is prime\n",num);
        else printf("%d is not prime\n",num);
        return 0;
    }

    