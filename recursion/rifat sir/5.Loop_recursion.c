#include<stdio.h>

void loop(int start, int end, int increment)
{
    if(start>end) return;

    printf("%d ",start);
    loop(start+increment, end, increment);
}

int main()
{
    loop(10,100,10);

}
