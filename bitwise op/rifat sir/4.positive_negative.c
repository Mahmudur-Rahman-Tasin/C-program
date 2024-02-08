#include<stdio.h>

int main()
{
    int x,y;

    scanf("%d",&x);
    int s=8*sizeof(x);
    int mask=1<<(s-1);

    if(x&mask) printf("Negative");
    else printf("Positive");

}
