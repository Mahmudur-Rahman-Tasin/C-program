#include <stdio.h>

// General form of defining an enumeration
enum EnumName {
    Value1,
    Value2,
    // ... more values
};

int main() {
    // Enum for primary colors
    enum PrimaryColors {
        Red,
        Green,
        Blue
    };

    // Declare a variable of the enumeration type
    enum PrimaryColors primaryColor;

    // Assign a value to the variable
    primaryColor = Red;

    // Use the variable
    printf("Selected color: ");
    switch (primaryColor) {
        case Red:
            printf("Red\n");
            break;
        case Green:
            printf("Green\n");
            break;
        case Blue:
            printf("Blue\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}
