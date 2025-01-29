#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10, b = 5;
    bool x = true, y = false;
    
    printf("Logical Operators in C:\n");
    printf("AND (x && y): %d && %d = %d\n", x, y, x && y);
    printf("OR (x || y): %d || %d = %d\n", x, y, x || y);
    printf("NOT (!x): !%d = %d\n", x, !x);
    printf("NOT (!y): !%d = %d\n", y, !y);
    
    return 0;
}