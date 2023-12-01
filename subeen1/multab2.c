#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplication table of number 5 using sum!\n");
    int i,m=0,n=5;
    for(i=1;i<=10;i++){
        m=m+n;
        printf("%d X %d =%d\n",n,i,m);
    }
    return 0;
}
