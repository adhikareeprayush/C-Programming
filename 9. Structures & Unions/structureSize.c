#include <stdio.h>

struct Person
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    printf("Size of Person Structure: %ld bytes.\n", sizeof(struct Person));
    return 0;
}