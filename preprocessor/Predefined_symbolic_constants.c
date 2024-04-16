#include<stdio.h>
#include <limits.h>
#include<assert.h>

int main()
{
    printf("System date is: %s\n", __DATE__);
    printf("System time is: %s\n", __TIME__);
    printf("File name with location: %s\n", __FILE__);
    int x=10;
    assert(x<10);


    printf("The value of maximum int is: %d\n",INT_MAX);
    printf("Line No. %d\n",__LINE__);
}
