#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer types
    int intVar;
    short shortVar;
    long longVar;
    long long longLongVar;

    // Floating point types
    float floatVar;
    double doubleVar;
    long double longDoubleVar;

    // Character type
    char charVar;

    // Boolean type (from stdbool.h)
    bool boolVar;

    // Comparing sizes of data types
    printf("Size Comparison of Data Types:\n");
    printf("int: %lu bytes\n", sizeof(intVar));
    printf("short: %lu bytes\n", sizeof(shortVar));
    printf("long: %lu bytes\n", sizeof(longVar));
    printf("long long: %lu bytes\n", sizeof(longLongVar));
    printf("float: %lu bytes\n", sizeof(floatVar));
    printf("double: %lu bytes\n", sizeof(doubleVar));
    printf("long double: %lu bytes\n", sizeof(longDoubleVar));
    printf("char: %lu bytes\n", sizeof(charVar));
    printf("bool: %lu bytes\n", sizeof(boolVar));

    return 0;
}