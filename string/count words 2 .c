#include <stdio.h>
//user input string length checker app
int string_length(char str[])
{
int i, length = 0;
for(i = 0; str[i] != '\0'; i++) {
length++;/* counts length for each letter */
}
return length;
}
int main()
{
char country[100];/* highest length set */
int length;
while(scanf("%s", &country)==1) {/* without & okay too? */
length = string_length(country);
printf("length: %d\n", length);
} //loop always craving for new inputs and also words after space
return 0; //loop doesn't stop normally, need to input ctrl+z in terminal to externally stop, why?
}
