/*Conditions: the lines cannot be parallel,
 new line cannot pass through previous intersections*/

#include <stdio.h>

int maxRegions(int n)
{
    if (n<=0)
        return 0;
    else if (n==1)
        return 2;
    else
    {
       return maxRegions(n-1)+n;
    }
}

int main()
{
    int line,a;
    printf("Enter number of lines: ");
    scanf("%d", &line);
    a=maxRegions(line);

    printf("Total regions: %d",a);
    return 0;
}



