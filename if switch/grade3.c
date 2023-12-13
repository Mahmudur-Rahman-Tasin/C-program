#include <stdio.h>

int main()
{
int a;
scanf("%d",&a);
switch (a)
{
    case 80 ... 100 :printf("A+");break ;
    case 75 ... 79 : printf ("A");break;
    case 70 ... 74 : printf ("A-");break;
    case 65 ... 69 : printf ("B+");break;
    case 60 ... 64 : printf ("B");break;
    case 55 ... 59 : printf ("C");break;
    case 40 ... 54 : printf ("D");break;
    case 0 ... 39 : printf ("F");break;
    default : printf("invalid");

}

    return 0;
}
