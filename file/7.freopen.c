#include<stdio.h>

int main()
{
    freopen("fre_input.txt","r",stdin);
    freopen("fre_output.txt","w",stdout);

    int i;
    scanf("%d",&i);
    for(int k=0;k<i;k++) printf("%d\n",k);
    printf("%d",i);
    return 0;
}
