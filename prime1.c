
#include <stdio.h>
#include <math.h>
//1,3 problem still
int main(){
    int i,num,is_prime=1;//flag variable
    scanf("%d",&num);
    for(i=2;i<=sqrt(num);i++){//i factor counter or num/2
        if(num%i==0) is_prime=0;//6 er factor paisi,tai nonprime
        if(is_prime!=0 && num!=1) printf("%d is prime\n",num);
        else printf("%d is not prime\n",num);
    }

    return 0;
}