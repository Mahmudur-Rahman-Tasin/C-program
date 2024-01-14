#include <stdio.h>

double baseExpo(int base, int expo)
{                                      //ekhane abar base expo declare kora jabe na 
    int i;
    double r=1;
    if(expo<0)
    {
        double neg=expo;
        expo=-expo;
    }
    for(i=1;i<=expo;i++)
    {
        r=r*base;
    }
    if(neg<0)
    {
        return 1/r;
    }
    else return r;

}

int main()
{
    int i,b,e;
    double r;
    scanf("%d %d",&b,&e);
    r=baseExpo(b,e);
    printf("%lf",r);

    return 0;
}
