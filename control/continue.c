#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            if(i==j) continue;
            printf("%d, %d\n",i,j);
        }
    }
    return 0;
}
