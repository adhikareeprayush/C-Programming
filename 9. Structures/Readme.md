# Structures in C

## 1. Introduction
Structures in C are user-defined data types that allow grouping of different data types under one name. They are useful when handling complex data that involves multiple related fields.

## 2. Structure Declaration and Definition
A structure is defined using the `struct` keyword.

### Syntax:
```c
struct StructureName {
    dataType member1;
    dataType member2;
    // More members...
};
```

### Example:
```c
struct Student {
    char name[50];
    int age;
    float marks;
};
```

## 3. Declaring Structure Variables
Structure variables can be declared in two ways:
- Inside the structure definition
- Separately after the definition

### Example:
```c
struct Student student1, student2;
```

## 4. Nested Structures
A structure can contain another structure as its member.

### Example:
```c
struct Address {
    char city[50];
    char state[50];
};

struct Student {
    char name[50];
    int age;
    struct Address addr;
};
```

## 5. Assigning Values to Structure Members
Values can be assigned to structure members in different ways:

### Using Direct Assignment:
```c
struct Student s1;
s1.age = 20;
s1.marks = 85.5;
strcpy(s1.name, "John Doe");
```

## 6. Taking Input from the User
Structure members can be assigned values using `scanf` and `gets`.

### Example:
```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;
    
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    
    printf("\nStudent Details:\nName: %sAge: %d\nMarks: %.2f\n", s1.name, s1.age, s1.marks);
    
    return 0;
}
```

## 7. Array of Structures
An array of structures allows storing multiple structure variables in an indexed manner.

### Example:
```c
struct Student students[3];
```

### Assigning Values:
```c
strcpy(students[0].name, "Alice");
students[0].age = 21;
students[0].marks = 90.0;
```

## 8. Pointer to Structures
A structure pointer is used to access structure members using `->`.

### Example:
```c
struct Student *ptr;
ptr = &s1;
printf("Name: %s", ptr->name);
```

## 9. Conclusion
Structures in C are powerful tools for managing complex data, allowing efficient organization and manipulation of related data fields.

