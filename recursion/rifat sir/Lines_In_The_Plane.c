#include<stdio.h>

int Number_of_Regions(int l)
{
    if(l==0) return 1;
    else return Number_of_Regions(l-1)+l;
}

int main()
{
    int l;
    printf("Number of lines: ");
    scanf("%d",&l);

    printf("Number of regions: %d",Number_of_Regions(l));
    return 0;
}
