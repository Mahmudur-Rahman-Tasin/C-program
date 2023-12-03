#include<stdio.h>
//gcd and lcm together
int main ()

{
    int num1,num2,n1,n2,rem,gcd,lcm;

    printf ("ENTER 1ST NUMBER :");
    scanf ("%d",&num1);

    printf ("ENTER 2ND NUMBER :");
    scanf ("%d",&num2);

    n1=num1;
    n2=num2;

    while (n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;

    printf ("GCD : %d",gcd);
    printf ("\nLCM : %d",lcm);

    getch();
    return 0;
}
