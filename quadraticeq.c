#include<stdio.h>
#include<math.h>

//Suppose, given quadratic equation : ax^2+bx+c=0

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c); 

    float x1,x2;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("x1: %.2f\nx2: %.2f",x1,x2);
    return 0;
}
