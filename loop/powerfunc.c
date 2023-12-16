#include <stdio.h>

double baseExpo(int base,int expo)
{
    int i;
    double r=1,neg;
    neg=expo;
    expo=expo<1? -expo:expo;
    for(i=0;i<expo;i++)
    {
        r=r*base;
    }
    return neg<0? 1/r:r;

}

int main()
{
    int i,b,e;
    double result;
    scanf("%d %d",&b,&e);
    result=baseExpo(b,e);
    printf("%lf",result);

    return 0;
}
