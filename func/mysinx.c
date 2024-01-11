#include <stdio.h>
double mysinx(double xr)
{
    double sum,t,i;
    sum=xr;
    t=xr;
    for(i=1;i<40;i++)
    {
        t=t*(-1)*xr*xr/(2*i*(2*i+1)) ;
        sum=sum+t ;
    }
    return sum;
}
int main()
{
    int i;
    double x,r;
    scanf("%lf",&x);
    x=x*3.14159/180;                            //x=22.0*x/ (7*180) ; typecast how?
    r=mysinx(x);
    printf("%lf",r);
    return 0;
}
