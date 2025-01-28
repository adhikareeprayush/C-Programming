#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    struct Student students[5];
    // first student -> students[0]
    // first student name -> students[0].name
    // fourth student marks -> students[3].marks

    strcpy(students[0].name, "Structure One");
    students[0].marks = 100.87;

    printf("Student 1: %s, Marks: %f\n", students[0].name, students[0].marks);

    return 0;
}