#include <stdio.h>

union Value
{
    int i;   // 4 byte
    float f; // 4 byte
};

int main()
{
    union Value value1;
    value1.i = 10;
    printf("Value 1 -> i : %d\n", value1.i); // 10
    printf("Value 1 -> f : %f\n", value1.f); // random value
    printf("Value 1 -> i : %d\n", value1.i); // 10
    value1.f = 10.21;
    printf("Value 1 -> i : %d\n", value1.i); // random value
    printf("Value 1 -> f : %f\n", value1.f); // 10.210000
    return 0;
}
