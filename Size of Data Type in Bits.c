/*Write a C Program that takes the choice of a data type as an integer input and outputs
the size of that data type in number of bits*/

#include <stdio.h>


int main()
{
    int choice;

    printf("Please input your choice number:\n");
    printf("1. Integer\n2. Character\n3. Float\n4. Double\n5. Long Integer\n\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Size of integer is %d bits\n", sizeof(int)*8);
            break;
        case 2:
            printf("Size of Character is %d bits\n", sizeof(char)*8);
            break;
        case 3:
            printf("Size of Float is %d bits\n", sizeof(float)*8);
            break;
        case 4:
            printf("Size of Double is %d bits\n", sizeof(double)*8);
            break;
        case 5:
            printf("Size of Long Integer is %d bits\n", sizeof(long int)*8);
            break;
    }

    return 0;
}

