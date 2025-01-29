#include <stdio.h>

int main() {
    int a = 10, b = 5;
    
    printf("Bitwise Operators in C:\n");
    printf("Bitwise AND (a & b): %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR (a | b): %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR (a ^ b): %d ^ %d = %d\n", a, b, a ^ b);
    printf("Bitwise NOT (~a): ~%d = %d\n", a, ~a);
    printf("Left Shift (a << 1): %d << 1 = %d\n", a, a << 1);
    printf("Right Shift (a >> 1): %d >> 1 = %d\n", a, a >> 1);
    
    return 0;
}