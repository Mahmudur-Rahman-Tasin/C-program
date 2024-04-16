
#include <stdio.h>

#define PI 3.14159
#define CIRCLE_AREA(x)(PI*(x)*(x))
#define CIRCLE_AREA1(x) PI*x*x

#define swap(x,y) int container = x;x=y;y=container;



int main()
{
    int a = 5, b = 8;
    float area, area1;

    area=CIRCLE_AREA(a+1);
    area1=CIRCLE_AREA1(a+1);
    swap(a,b);

    printf("area: %f\n",area);
    printf("area1: %f\n",area1);
    printf("a = %d\nb = %d", a,b);

    return 0;
}
