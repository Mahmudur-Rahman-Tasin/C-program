#include<stdio.h>

int main()
{
    int num,i,f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,digit;
    scanf("%d",&num) ;

    for(i=0;num!=0;num=num/10)
    {
        digit=num%10 ;
        if (digit == 0) f0++;
        if (digit == 1) f1++;
        if (digit == 2) f2++;
        if (digit == 3) f3++;
        if (digit == 4) f4++;
        if (digit == 5) f5++;
        if (digit == 6) f6++;
        if (digit == 7) f7++;
        if (digit == 8) f8++;
        if (digit == 9) f9++;

    }
    printf("%d\n",f0);
    printf("%d\n",f1);
    printf("%d\n",f2);
    printf("%d\n",f3);
    printf("%d\n",f4);
    printf("%d\n",f5);
    printf("%d\n",f6);
    printf("%d\n",f7);
    printf("%d\n",f8);
    printf("%d\n",f9);
    return 0 ;
}
