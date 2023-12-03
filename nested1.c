#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=3;i++){//i loop counter
        for(j=1;j<=i;j++){
            printf("%d, %d\n",i,j);
        }
    }

    return 0;
}