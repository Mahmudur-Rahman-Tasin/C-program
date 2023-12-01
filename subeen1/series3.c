//1*2 + 2*3 + 3*4 .....+ n1*n2 =?

#include<stdio.h>

int main ()
{
    int n1,n2,a=1,b=2,sum=0;

    printf("\n1*2 + 2*3 + 3*4 .....+ n1*n2 =?\n");

    printf("\nEnter n1 of the series : ");
    scanf("%d",&n1);


    printf("\nEnter n2 of the series : ");
    scanf("%d",&n2);

    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a++;
        b++;

    }

    printf("\n1*2 + 2*3 + 3*4 .....+ %d*%d = %d\n",a,b,sum);



    printf("\nSum of the series : %d\n",sum);

    getch();
    return 0;
}
