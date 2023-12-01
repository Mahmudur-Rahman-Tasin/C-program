#include<stdio.h>
//successive series with 1st and last number
int main()
{
    int n,l,i,sum=0 ;

    printf ("Enter first number : ");
    scanf ("%d",&n);

    printf ("Enter last number : ");
    scanf ("%d",&l);

    printf ("Enter difference :");
    scanf ("%d",&i);

    while (n<=l){
        sum=sum+n;
        n=n+i;
    }
        printf("result : %d",sum);


    getch();
    return 0;
}
