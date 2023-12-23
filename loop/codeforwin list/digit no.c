#include<stdio.h>

int main()
{
    int num,i;
    scanf("%d",&num);

    for(i=1;num/10!=0;i++)
    {
        num=num/10;
    }
    
    printf("%d",i);
    
    
    return 0;
}
