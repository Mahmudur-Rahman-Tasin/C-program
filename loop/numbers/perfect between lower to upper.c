#include<stdio.h>

int main()
{
    int n,i,sum,l,u,c=0;
    scanf("%d %d",&l,&u);

    for(n=l;n<=u;n++)
    {
        for(i=1,sum=0;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            printf("%d ",sum);
            c++;                        //counts how many perfect it encounters
        }
    }
    printf("\nTotal %d",c);


    return 0 ;
}
