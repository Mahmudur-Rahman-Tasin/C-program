#include<stdio.h>
double baseExpo(int b, int e)
{
    double p=1,i;
    for(i=1;i<=fabs(e);i++)
    {
        p=p*b;
    }
    if(e<0) return 1/p;                         //e age thekei negative thakle prb nai ekhane karon power value abs diye asbe
    else return p;
}
int main()
{
   int ba,ex;
   double r;
   scanf("%d %d",&ba,&ex);
   r=baseExpo(ba,ex);
   printf("%lf",r);


    return 0;
}
