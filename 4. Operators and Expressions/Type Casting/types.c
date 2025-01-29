#include <stdio.h>
int main()
{
    int a = 10, b = 3;
    // implicit type casting
    printf("a/b = %f \n", (float)a / b); // float / integer = float, integer/integer = integer

    int c = 12.3; // explicit type casting
    printf("c = %d\n", c);

    int d = 65;            // ASCII Table
    printf("D = %c\n", d); // Explicit Type Casting

    return 0;
}