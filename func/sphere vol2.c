#include <stdio.h>
float findVol(int radius)                       // r argument value copies into parameter radius
{
    float pi=22/7.0;
    float volume=(double)4/3*pi*radius*radius*radius;                       //int radius typecasted to double inside volume
    return volume;
}
int main()
{
    int r;
    scanf("%d",&r);
    float v=findVol(r);//declared v
    printf("Sphere Volume=%f",v);

    return 0;
}
