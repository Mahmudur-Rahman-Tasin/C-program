#include <stdio.h>
//bug
double baseExpo(int base,int expo)
{
    int i;
    double r=1,neg,result;
    neg=expo;
    expo=expo<1? -expo:expo;
    for(i=0;i<expo;i++)
    {
        result=result*base;
    }
    return neg<0? 1/result:result;

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
