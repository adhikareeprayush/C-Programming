#include <stdio.h>

int main() {
    int a = 10, b = 5;
    
    printf("Arithmetic Operators in C:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    a++; // Increment
    b--; // Decrement
    printf("Increment: a++ = %d\n", a);
    printf("Decrement: b-- = %d\n", b);
    
    return 0;
}