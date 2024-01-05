#include<stdio.h>

int main()
{
    int i, n;
    float x, sum, t;

    scanf("%f",&x); //degree input
    scanf("%d",&n); //accuracy of terms
     
    x=x*3.14159/180;
    t=1; //1 er sathe gun hoye nxt term
    sum=1; //first term 1 er sathe add

    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1)); //VVI
        sum=sum+t;
    }
     
    printf(" The value of Cos(%f) is : %.4f", x, sum);
    return 0;
}