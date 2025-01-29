# Dynamic Memory Allocation in C

## Introduction

Dynamic memory allocation in C enables the allocation and deallocation of memory at runtime. Unlike static memory allocation, which is determined at compile time, dynamic memory allocation provides flexibility by allowing programs to request memory when needed.

## Why Use Dynamic Memory Allocation?

- **Efficient Memory Utilization**: Only allocates memory as required.
- **Handling Variable Data**: Useful when the amount of data is unknown beforehand.
- **Resizing Memory**: Enables resizing of memory blocks using `realloc()`.
- **Better Control Over Memory**: Helps manage memory in large and complex programs.

## Functions for Dynamic Memory Allocation

C provides four standard library functions for dynamic memory management, which are defined in the `<stdlib.h>` header file.

### 1. `malloc()`

Allocates a block of memory of the specified size (in bytes) and returns a pointer to it. The allocated memory is uninitialized.

#### Syntax:

```c
void* malloc(size_t size);
```

#### Example:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); // Allocates memory for 5 integers
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    
    free(ptr); // Free allocated memory
    return 0;
}
```

### 2. `calloc()`

Allocates memory for an array of elements, initializing all bytes to zero.

#### Syntax:

```c
void* calloc(size_t num, size_t size);
```

#### Example:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int)); // Allocates memory for 5 integers and initializes them to zero
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Prints 0 0 0 0 0
    }
    
    free(ptr);
    return 0;
}
```

### 3. `realloc()`

Resizes an already allocated memory block.

#### Syntax:

```c
void* realloc(void* ptr, size_t new_size);
```

#### Example:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(2 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    ptr[0] = 10;
    ptr[1] = 20;
    
    // Resize memory to hold 4 integers
    ptr = (int*) realloc(ptr, 4 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    ptr[2] = 30;
    ptr[3] = 40;
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
```

### 4. `free()`

Deallocates previously allocated memory to prevent memory leaks.

#### Syntax:

```c
void free(void* ptr);
```

#### Example:

```c
#include <stdlib.h>
int main() {
    int *ptr = (int*) malloc(10 * sizeof(int));
    
    if (ptr == NULL) {
        return 1;
    }
    
    free(ptr); // Free allocated memory
    return 0;
}
```

## Common Pitfalls and Best Practices

### Pitfalls:

1. **Memory Leaks**: Failing to free allocated memory leads to leaks.
2. **Dereferencing Uninitialized Pointers**: Always check if `malloc()` or `calloc()` returns NULL.
3. **Dangling Pointers**: Freeing memory but still accessing the pointer.
4. **Incorrect ****\`\`**** Usage**: Ensure `realloc()`'s return value is checked before overwriting the original pointer.

### Best Practices:

- Always check if memory allocation was successful.
- Use `calloc()` when initializing memory is required.
- Free allocated memory once it's no longer needed.
- Set pointers to `NULL` after freeing them to avoid dangling pointers.

## Conclusion

Dynamic memory allocation is a powerful feature in C that provides flexibility in managing memory. However, improper usage can lead to memory leaks, segmentation faults, and undefined behavior. Proper allocation, reallocation, and deallocation ensure efficient memory management and prevent common pitfalls.

