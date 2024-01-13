
#include <stdio.h>

int main(){
    int a,b,min,i,gcd,lcm;
    scanf("%d %d",&a,&b);

    if(a<b) min=a;
    else min=b; //min er ag porjonto check
    
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
                                                //printf("gcd of %d, %d is %d\n",a,b,gcd); only common factors show korto
        }
    }
    printf("gcd of %d, %d is %d\n",a,b,gcd);  
    
    lcm=(a*b)/gcd;
    printf("lcm of %d, %d is %d\n",a,b,lcm);
    
    return 0;
}
