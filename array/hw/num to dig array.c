#include<stdio.h>
int main()
{
    int n,n1,i,j,k;
    scanf("%d",&n);
    n1=n;
    int dig[50];
    for(i=0;n1!=0;i++)
    {
        n1=n1/10;
    }
    printf("Total %d digits\n",i);
    for(k=i;k>0;k--)
    {
        dig[k]=n%10;                            //dig0 te jete parbena so garbage, j=1 theke kora lagbe
        n=n/10;
    }
    for(j=1;j<i+1;j++)
    {
        printf("%d ",dig[j]);
    }
    return 0;
}
