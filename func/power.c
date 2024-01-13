#include <stdio.h>

double baseExpo(int base, int expo)
{                                      //ekhane abar base expo declare kora jabe na 
    int i;
    double r=1,neg;
    neg=expo;                           //neg er moddhe - shoho ta rakhlam
    expo=(expo<1)? -expo:expo;                        //expo positive banaye power value pabo tai;
    for(i=0;i<expo;i++)
    {
        r=r*base;
    }
    return (neg<0)? 1/r:r;

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
