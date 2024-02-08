#include<stdio.h>

int main()
{
    int x,count=0;
    scanf("%d",&x);

//    while(x%2==0)
//    {
//        x=x/2;
//        count++;
//    }
//
//    if(x==1) printf("Power of two, ans: %d",count);
//    else printf("Not power of two");

    if(x!=0 && !(x&(x-1))){

        printf("\nPower of two");
        count=0;
        while(x!=1)
        {
            x=x>>1;
            count++;
        }
        printf("  %d",count);
    }
    else printf("\nNot power of two");
}
