#include<stdio.h>

int main()
{
    int i, n;
    float x, sum=1, t;

    scanf("%f",&x); //degree input
    scanf("%d",&n); //accuracy of terms

    x=x*3.14159/180;

    t=x; //first term er sathe gun hobe
    sum=x; //age theke first term ache

    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i+1)); //VVI, age niche - chilo ekhon +, 2nd term
        sum=sum+t; 
    }
     
    printf(" The value of sin(%f) is : %.4f", x, sum);
    return 0;
}