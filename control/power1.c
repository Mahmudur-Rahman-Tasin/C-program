#include <stdio.h>

int main(){
    int x,m,count;
    float prod=1;
    scanf("%d %d",&x,&m);
    for(count=0;count<m;count++){
        prod=prod*x;
    }
    printf("%f",prod);
    return 0;
}
