#include<stdio.h>
int main()
{
    int n=6,i=0;
    char course[]="CSE296"; //course[7] actually, index=6 has null

    for(i=0;i<n+1;i++)
    {
        if(course[i]=='\0') printf("\nNull");
        printf("\n%c %d\n",course[i],&course[i]);

    }
    return 0;
}
