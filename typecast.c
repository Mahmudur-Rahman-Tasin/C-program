#include <stdio.h>
int main()
{
double f;
f=(double)(7/2);// 7/2=3 actually an integer, but amra chai f er moddhe double value ta ashuk
printf ("%lf \n", f);
printf ("%d \n", (int)f);//lost precision
return 0;
}
