
#include <stdio.h>

typedef struct
{
    int a;
    int b;
} str1;

typedef struct
{
    char xyz[80];
    int i;
    str1 first_struct;
} str2;     //If we write "str2[10]" here, i.e., structure type is array of structures,
            // in line no. 19  then we should only write "new_struct", and not mention the size in subscript.

int main()
{
    str2 new_struct[10];

    new_struct[0].i = 50;
    printf("%d\n",new_struct[0].i);

    new_struct[3].first_struct.a = 15.9;  // Will be typecast into int.
    printf("%d\n", new_struct[3].first_struct.a);

    return 0;
}
