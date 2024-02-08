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
    int x=10;
    PrintNatural(x);

}
