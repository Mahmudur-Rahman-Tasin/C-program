#include<stdio.h>

void PrintNatural(int n)
{
    if(n==1) {
        printf("%d ",n);
        return;
    }
    PrintNatural(n-1);
    printf("%d ", n);
}

int main()
{
    int n=10;
    PrintNatural(n);
}
