# Unions in C

## 1. Introduction
Unions in C are user-defined data types similar to structures. However, in a union, all members share the same memory location, meaning only one member can store a value at a time. This feature makes unions memory-efficient but with certain constraints.

## 2. Union Declaration and Definition
A union is defined using the `union` keyword.

### Syntax:
```c
union UnionName {
    dataType member1;
    dataType member2;
    // More members...
};
```

### Example:
```c
union Data {
    int i;
    float f;
    char str[20];
};
```

## 3. Declaring Union Variables
Union variables can be declared similarly to structures:

### Example:
```c
union Data data1, data2;
```

## 4. Assigning Values to Union Members
Since all members share the same memory, assigning a value to one member will overwrite the previous value.

### Example:
```c
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("Integer: %d\n", data.i);
    
    data.f = 220.5;
    printf("Float: %f\n", data.f);
    
    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);
    
    return 0;
}
```

## 5. Taking Input from the User
Union members can be assigned values using `scanf` and `strcpy`.

### Example:
```c
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    printf("Enter an integer: ");
    scanf("%d", &data.i);
    printf("You entered: %d\n", data.i);
    
    printf("Enter a float: ");
    scanf("%f", &data.f);
    printf("You entered: %f\n", data.f);
    
    printf("Enter a string: ");
    scanf("%s", data.str);
    printf("You entered: %s\n", data.str);
    
    return 0;
}
```

## 6. Differences Between Structures and Unions
| Feature    | Structure | Union |
|-----------|-----------|---------|
| Memory    | Allocates memory for all members | Shares memory among all members |
| Access    | All members can be accessed simultaneously | Only one member holds a value at a time |
| Size      | Sum of sizes of all members | Size of the largest member |

## 7. Pointer to Unions
Union pointers work similarly to structure pointers.

### Example:
```c
union Data *ptr;
ptr = &data;
printf("Value: %d", ptr->i);
```

## 8. Conclusion
Unions in C are useful when memory efficiency is a priority and when only one value needs to be stored at a time. However, careful handling is necessary to avoid unexpected data overwrites.

