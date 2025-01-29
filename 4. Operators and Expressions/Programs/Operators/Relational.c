#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10, b = 5;
    
    printf("Relational Operators in C:\n");
    printf("Equal to (a == b): %d == %d = %d\n", a, b, a == b);
    printf("Not equal to (a != b): %d != %d = %d\n", a, b, a != b);
    printf("Greater than (a > b): %d > %d = %d\n", a, b, a > b);
    printf("Less than (a < b): %d < %d = %d\n", a, b, a < b);
    printf("Greater than or equal to (a >= b): %d >= %d = %d\n", a, b, a >= b);
    printf("Less than or equal to (a <= b): %d <= %d = %d\n", a, b, a <= b);
    
    return 0;
}