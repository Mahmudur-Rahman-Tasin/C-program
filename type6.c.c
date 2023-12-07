#include <stdio.h>
int main()
{
    double f;
    f=(double)(7/2);// integer division hobe, 7/2=3.0000 f e jabe
    printf ("%lf \n", f);
    printf ("%d \n", (int)f);//lost precision
    return 0;
}