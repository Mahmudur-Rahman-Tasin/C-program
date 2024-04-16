
   // A program to convert decimal to  binary using union including a structure with bit-fields

#include <stdio.h>

typedef struct st
{
    unsigned int a:1;
    unsigned int b:1;
    unsigned int c:1;
    unsigned int d:1;
    unsigned int e:1;
    unsigned int f:1;
    unsigned int g:1;
    unsigned int h:1;
}A;

typedef union
{
    int i;
    A number;
}UN;

int main()
{
    int num;

    printf("Enter a number:\n");

    scanf("%d",&num);

    UN dec;
    dec.i = num;

    printf("\nThe binary representation of %d is:\n\n",num);

    if (dec.number.h) printf("1");
    else printf("0");

    if (dec.number.g) printf("1");
    else printf("0");

    if (dec.number.f) printf("1");
    else printf("0");

    if (dec.number.e) printf("1 ");
    else printf("0 ");

    if (dec.number.d) printf("1");
    else printf("0");

    if (dec.number.c) printf("1");
    else printf("0");

    if (dec.number.b) printf("1");
    else printf("0");

    if (dec.number.a) printf("1");
    else printf("0");

    printf("\n");

    printf("%d%d%d%d%d%d%d%d\n",dec.number.h,dec.number.g,dec.number.f,dec.number.e,dec.number.d,dec.number.c,dec.number.b,dec.number.a);


    return 0;

}
