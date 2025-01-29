// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence : %d %d ", a, b);
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
