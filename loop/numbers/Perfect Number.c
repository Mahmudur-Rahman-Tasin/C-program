#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)                    //excluding n karon proper factors 
    {                
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(n==c) printf("Perfect number");
    else printf("Not a perfect number");

return 0;
}
