#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Celcius to Farenheit conversion!\n");
    double c,f;
    scanf("%lf",&c);
    printf("%lf\n",((9*c)/5)+32);

    printf("Farenheit to celcius conversion!\n");
    scanf("%lf",&f);
    printf("%lf",(5*f-5*32)/9);//correct simple calculation expression


    return 0;
}
