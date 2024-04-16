#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main()
{
    struct Point p1={5,6};
    struct Point p2={2,2};

    //dot operation for accessing member
    printf("x:%d y:%d\n",p1.x,p1.y);
    printf("x:%d y:%d",p2.x,p2.y);
}
