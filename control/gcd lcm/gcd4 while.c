
#include <stdio.h>

int main(){
    int a,b,min,i=1,gcd;
    scanf("%d%d",&a,&b);
    if(a<b) min=a;
    else min=b;
    while(i<=min){
        if(a%i==0 && b%i==0){
            gcd=i;
            printf("gcd of %d, %d is %d\n",a,b,gcd);
            
    }
        i++;
    }

    return 0;
}