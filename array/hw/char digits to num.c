#include<stdio.h>
int main()
{
    int n,i,j;
    char c[100];

    for(i=0;c[i-1]!='\n';i++)                             // enter dile break
    {
        scanf("%c",&c[i]);
    }
    int no[i];
    for(j=0;j<i;j++)
    {
        no[j]=c[j]-'0';
    }
    for(j=0;j<i-1;j++)
    {
        printf("%d ",no[j]);
    }

    return 0;
}
