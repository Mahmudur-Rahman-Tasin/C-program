#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Permutation of 1,2,3 numbers in ascending order using nested for loops!\n");
    for(a=1;a<=3;a++){
    for(b=1;b<=3;b++){
    for(c=1;c<=3;c++){
            if(a!=b && b!=c && c!=a)printf("%d,%d,%d\n",a,b,c);

    }
    }
    }
    return 0;
}
