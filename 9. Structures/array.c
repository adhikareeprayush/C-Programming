#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    float marks;
} students[5];

int main()
{
    // strcpy(kaa copy garne, kaa bata copy garne)
    char name[50];
    int i;
    float marks;
    printf("Enter the data: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name and marks: ");
        scanf("%s %f", name, &marks);

        // saving the data to the structure
        // students[i].name = name; Error
        strcpy(students[i].name, name); // VVI
        students[i].marks = marks;
    }

    printf("\n\n\n The data of students: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s , Marks: %f\n", students[i].name, students[i].marks);
    }

    return 0;
}