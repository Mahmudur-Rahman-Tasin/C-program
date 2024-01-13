#include<stdio.h>

int main()
{
    int n,c=0,i;
    scanf("%d",&n);

    for(i=1;i*i<=n;i++)
    {
        if(n%i==0) c++;                     //only 1 factor hobe, sqrt na dile 2 (nije shoho)
    }
    if(c==1 && n>1) printf("%d Prime",n); //only 1 factor hote parbe

    return 0 ;
}
