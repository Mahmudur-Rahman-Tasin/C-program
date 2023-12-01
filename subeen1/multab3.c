#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m=0;
    printf("1 to 20 multiplication table using sum!\n");

    for(n=1;n<=20;n++){
        for(i=1;i<=20;i++){
            m=m+n;
            printf("%d X %d = %d\n",n,i,m);
        }
        m=0;

    }

    return 0;
}
