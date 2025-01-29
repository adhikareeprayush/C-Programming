// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>

int fibbo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%dth term of the sequence : %d\n", n, fibbo(n));

    return 0;
}