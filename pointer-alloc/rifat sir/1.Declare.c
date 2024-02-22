#include<stdio.h>

int main()
{
    int *p;
    int q=100;

    printf("%d\n",q);
    printf("Address: %d\n",&q);
    printf("Address of p: %d\n",&p);

    p=&q;
    printf("%d\n",*p);

    *p=(*p)+1;
    printf("New q: %d\n",q);

    *p=1234;
    printf("updated q: %d\n",q);

    printf("*p++: %d\n", *p++); // *p dibe first. next line e giye p point korbe ager q_address_value+4bytes ke
    printf("p: %d\n", p); // new p points new address value
    printf("*p: %d\n", *p); // new address value

}
