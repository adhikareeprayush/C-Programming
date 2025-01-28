#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    float marks;
} student_1;

// struct Student student_1;

int main()
{
    // struct Student student_1 = {"Prayush", 100.09};
    // struct Student student_1;
    strcpy(student_1.name, "Prayush");
    student_1.marks = 100.09;
    printf("Name: %s, Marks: %f\n", student_1.name, student_1.marks);
    return 0;
}