#include <stdio.h>
#define pi 22/7.0
int main()
{
    int c;
    double r,l,w,d,l1,l2,h,b;
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("Input circle radius: ");
        scanf("%lf",&r);
        printf("Surface area of circle is: %lf",pi*r*r);
        break;
    case 2:
        printf("Input rectangle length, width: ");
        scanf("%lf %lf",&l,&w);
        printf("Surface area of rectangle is: %lf",l*w);
        break;
    case 3:
        printf("Input trapezium distance of parallels, length of parallels: ");
        scanf("%lf %lf %lf",&d,&l1,&l2);
        printf("Surface area of trapezium is: %lf",0.5*d*(l1+l2));
        break;
    case 4:
        printf("Input parallelogram height, base: ");
        scanf("%lf %lf",&h,&b);
        printf("Surface area of parallelogram is: %lf",h*b);
        break;
    }

    return 0;
}
