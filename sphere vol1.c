#include <stdio.h>
#define PI 3.141593
int main()
{
int r; double v; double pi=22/7.0;
printf("Radius of sphere=");
scanf("%d",&r);
v=(4/3.0)*pi*r*r*r;//int division
printf("Volume of sphere=%lf",v);

return 0; 
}
