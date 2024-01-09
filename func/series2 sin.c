
#include <stdio.h>

int main()
{
    int n,i;
    double x,sum=0,t;
    scanf("%lf %d",&x,&n);
    x=x*3.14159/180;
    //x=22.0*x/ (7*180) ; typecast how?
    sum=x;
    t=x;
    for(i=1;i<n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i+1)) ;
        sum=sum+t ;
    }
    printf("sin(%lf) = %lf",x,sum);

    return 0;
}
