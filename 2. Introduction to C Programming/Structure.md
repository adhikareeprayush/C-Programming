# Structure of a C Program

## 1. Preprocessor Directives

Preprocessor directives are commands that are executed before the compilation process begins. They start with a `#` symbol.

### Types:

1. **#include**:

   - Used to include header files.
   - Example:
     ```c
     #include<stdio.h> // Includes the Standard Input/Output library
     ```

2. **#define**:
   - Used to define constants or macros.
   - Example:
     ```c
     #define PI 3.14159 // Defines a constant named PI
     ```

---

## 2. The main Function

The `main` function is the starting point of every C program. It is where the execution begins.

### Syntax:

```c
int main() {
    // Your code goes here
    return 0;
}
```

### Key Points:

- **Return Type**: The `main` function typically returns an integer value. `return 0;` signifies successful program execution.
- **Structure**: The function body contains the code to be executed.

### Example:

```c
#include<stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---

## 3. `stdio.h` Header File

### Purpose:

`stdio.h` (Standard Input Output header) provides functionalities for input and output operations in C.

### Commonly Used Functions:

1. **`printf`**:

   - Prints formatted output to the console.
   - Example:
     ```c
     printf("Hello, %s!\n", "World");
     ```

2. **`scanf`**:
   - Reads input from the user.
   - Example:
     ```c
     int age;
     scanf("%d", &age);
     ```

### Why Include `stdio.h`?

Without this header, functions like `printf` and `scanf` will not be recognized, leading to compilation errors.

---

## 4. Arguments of the main Function

The `main` function can optionally take arguments to handle command-line inputs.

### Syntax:

```c
int main(int argc, char *argv[]) {
    // Code using argc and argv
    return 0;
}
```

### Parameters:

1. **`argc` (Argument Count)**:

   - Represents the number of arguments passed to the program, including the program's name.

2. **`argv` (Argument Vector)**:
   - An array of character pointers listing all arguments.
   - Example:
     - If the program is executed as: `./program arg1 arg2`
       - `argv[0]`: `./program`
       - `argv[1]`: `arg1`
       - `argv[2]`: `arg2`

### Example:

```c
#include<stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

---

This structure provides a robust framework for building efficient and scalable C programs, starting from preprocessor directives to managing command-line arguments.
