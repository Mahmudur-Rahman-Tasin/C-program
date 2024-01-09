#include<stdio.h>

int main()
{
    int i;
    double x, sum, t;
    scanf("%lf",&x);

    x=x*3.14159/180;
    sum=1;
    t=1;

    for(i=1; fabs(t)>1e-7 ;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }

    printf("The value of Cos(%lf) is : %lf", x, sum);
    return 0;
}
