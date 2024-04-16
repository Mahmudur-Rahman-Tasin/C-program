//
// Macro demo
// Author: Mohammad Saifur Rahman
//
#include <stdio.h>
#include <conio.h>

#define TOKENCONCAT( x, y ) x ## y

//
// a macro written erronously. There is no compile error, however
// See what happens if you pass 3-40 (not -37, but the expression 3-40)
//
// #define abs(x) (x < 0 ? -x : x)

//
// Correct version of the macro. Notice the use of parentheses
// Can you tell why we did not use a semicolon at the end?
//
#define abs(x) ((x) < 0 ? -(x) : (x))

//
// Multi-line macro
// Swap variables a and b using a third variable t
//
#define swap(t, a, b) \
{\
    t = a;\
    a = b;\
    b = t;\
}

//
// Notice function f(). Can you tell what will be the value
// printed by main() below?
//
int x = 3;
int xx=10;

int f()
{
    x = x*x;
    return x;
}

int main()
{
    int x = -5;
    double y = -10;
    printf("%d\n", TOKENCONCAT( x,x ));
    printf("%d", f());
   //getch();
    return 0;
}
