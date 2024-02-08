#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,firstdig,lastdig,bswap,aswap;
    scanf("%d",&num);
    bswap=num;
    lastdig=num%10;

    for(i=2;num/10>=10;i++){
        num=num/10;
    }

    firstdig=num/10;

    printf("%d %d digitno: %d ",firstdig,lastdig,i);

    aswap= bswap -lastdig +firstdig - firstdig*pow(10,i-1) + lastdig*pow(10,i-1) ;

    printf("%d",aswap);

    return 0;
}
