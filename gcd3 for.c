
#include <stdio.h>

int main(){
    int a,b,min,i,gcd;
    scanf("%d%d",&a,&b);
    if(a<b) min=a;
    else min=b;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
            printf("gcd of %d, %d is %d\n",a,b,gcd);
        }
    }

    return 0;
}