

#define VERSION 3

#if VERSION == 1
#define MESSAGE "This is version 1."
#elif VERSION == 2
#define MESSAGE "This is version 2."
#elif VERSION == 3
#define MESSAGE "This is version 3."
#else
#define MESSAGE "Unknown version."
#endif


#define FOO  // Uncomment this line to see the effect

#define PI=3.14159


int main()
{
    printf("%s\n\n\n", MESSAGE);

    #ifdef FOO
        printf("FOO is defined\n");
    #else
        printf("FOO is not defined\n");
    #endif

    #ifndef BAR
        printf("BAR is not defined\n");
    #else
        printf("BAR is defined\n");
    #endif

    printf("%f", PI);

}


