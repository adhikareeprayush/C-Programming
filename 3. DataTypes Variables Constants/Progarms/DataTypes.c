#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer types
    int intVar = 42;
    short shortVar = 32767;
    long longVar = 1234567890;
    long long longLongVar = 9223372036854775807;

    // Floating point types
    float floatVar = 3.14159;
    double doubleVar = 2.718281828;
    long double longDoubleVar = 1.6180339887;

    // Character type
    char charVar = 'A';

    // Boolean type (from stdbool.h)
    bool boolVar = true;

    // Printing values and their sizes
    printf("Integer types:\n");
    printf("int: %d, size: %lu bytes\n", intVar, sizeof(intVar));
    printf("short: %d, size: %lu bytes\n", shortVar, sizeof(shortVar));
    printf("long: %ld, size: %lu bytes\n", longVar, sizeof(longVar));
    printf("long long: %lld, size: %lu bytes\n", longLongVar, sizeof(longLongVar));

    printf("\nFloating point types:\n");
    printf("float: %f, size: %lu bytes\n", floatVar, sizeof(floatVar));
    printf("double: %lf, size: %lu bytes\n", doubleVar, sizeof(doubleVar));
    printf("long double: %Lf, size: %lu bytes\n", longDoubleVar, sizeof(longDoubleVar));

    printf("\nCharacter type:\n");
    printf("char: %c, size: %lu bytes\n", charVar, sizeof(charVar));

    printf("\nBoolean type:\n");
    printf("bool: %d, size: %lu bytes\n", boolVar, sizeof(boolVar));

    return 0;
}