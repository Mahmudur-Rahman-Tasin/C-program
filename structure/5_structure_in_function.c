#include<stdio.h>

struct Point{
    float x;
    float y;
};


struct Point Average(struct Point p1, struct Point p2)
{
    struct Point result;
    result.x=(p1.x+p2.x)/2;
    result.y=(p1.y+p2.y)/2;
    return result;
}

int main()
{
    struct Point p1,p2;
    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);
    struct Point p3=Average(p1,p2);
    printf("%.2f %.2f",p3.x,p3.y);
}
