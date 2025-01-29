#include <stdio.h>

int main()
{
    int n, o;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    o = n;

    while (n > 1)
    {
        fact = fact * n;
        n = n - 1;
    }

    printf("Factorial of %d = %d\n", o, fact);

    return 0;
}