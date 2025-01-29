#include <stdio.h>

union Person
{
    char name[10]; // 12
    int age[10];   // 4 * 10 = 40
    float marks;   // 4
};

int main()
{
    printf("Size of Person Structure: %ld bytes.\n", sizeof(union Person));
    return 0;
}