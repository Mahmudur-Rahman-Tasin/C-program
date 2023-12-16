#include <stdio.h>

int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}