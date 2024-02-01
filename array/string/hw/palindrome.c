#include <stdio.h>

int main()
{
    char str[100];
    int len=0;
    gets(str);
    while(str[len] != '\0') len++;
    int startIndex = 0;
    int endIndex   = len-1;
    
    while(startIndex <= endIndex)
    {
        if(str[startIndex] != str[endIndex])
            break;

        startIndex++;
        endIndex--;
    }

    if(startIndex >= endIndex)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}