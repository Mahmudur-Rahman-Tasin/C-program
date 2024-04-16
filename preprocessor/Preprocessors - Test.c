
#include <stdio.h>

#define s(n) scanf("%d", &n)  // made the work easy.
#define p(n) printf("%d", n)
#define display(x,i) printf("%d\n\n",x##i)


#define display1(arg) printf("My name is "    #arg    " Rahman\n") // The # converts text into string. The spaces...
                                                                // ... after and before #arg are ignored.


#define display2(x,i) printf("x"#i"=%d\n",x##i)
int main()
{


    int num;

    s(num);   // scans num

    printf("\n");

    p(num);  // prints num
    printf("\n\n");

    display1(Rifat); // Only one space will be in effect


    int x1 = 1, x2 = 2, x3 = 3;
    int i;

    display(x,2);

    display2(x,2);

    return 0;

}
