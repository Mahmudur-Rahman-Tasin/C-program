#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplication table of user inputted number!\n");
    int n,k=1;
    printf("Input the number you want the multiplication table (till 20) of: ");
    scanf("%d",&n);

    while(k<21){
        printf("%d X %d = %d\n",n,k,n*k);
        k++;
    }

    return 0;
}
