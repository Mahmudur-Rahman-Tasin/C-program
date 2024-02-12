#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[5]; //2000,2001,2002,2003,2004
    char pass = 50; //2005

    gets(buff); //abcde'\0' or abcdef'\0'
    printf("%d", pass); // 0 or 102(f ascii)

    return 0;
}
