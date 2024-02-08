#include<stdio.h>

int main()
{
    int num,i,firstdig,lastdig;
    scanf("%d",&num);

    lastdig=num%10;
    
    for(i=1;num/10>=10;i++){
        num=num/10;
    }
        
    firstdig=num/10;
    
    printf("%d %d",firstdig,lastdig);


    return 0;
}
