#include <stdio.h>
int minDenomination(int tk)
{
    int n1000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    int remtk;

    remtk=tk;

    n1000=remtk/1000;
    remtk=remtk%1000;

    n500=remtk/500;
    remtk=remtk%500;

    n200=remtk/200;
    remtk=remtk%200;

    n100=remtk/100;
    remtk=remtk%100;

    n50=remtk/50;
    remtk=remtk%50;

    n20=remtk/20;
    remtk=remtk%20;

    n10=remtk/10;
    remtk=remtk%10;

    n5=remtk/5;
    remtk=remtk%5;

    n2=remtk/2;
    remtk=remtk%2;

    n1 = remtk;

    printf("Notes needed:\n");
    printf("1000: %d\n", n1000);
    printf("500: %d\n", n500);
    printf("200: %d\n", n200);
    printf("100: %d\n", n100);
    printf("50: %d\n", n50);
    printf("20: %d\n", n20);
    printf("10: %d\n", n10);
    printf("5: %d\n", n5);
    printf("2: %d\n", n2);
    printf("1: %d\n", n1);
    return n1+n2+n5+n10+n20+n50+n100+n200+n500+n1000;
}
int main()
{
    int bdt;
    scanf("%d",&bdt);
    printf("Minimum notes: %d\n",minDenomination(bdt));


    return 0;
}
