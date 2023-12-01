#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("GCD HCF LCM CALCULATOR BETWEEN TWO NUMBERS!\n");
    int a,b;
    scanf("%d%d",&a,&b);
    for(;a<b;a--){
        if(b%a==0){
            printf("GCD is %d",a);
            break;
        }
        else continue;
    }
    for(;b<a;b--){
        if(a%b==0){
            printf("GCD is %d",b);
            break;
        }
        else continue;
    }
    return 0;
}
