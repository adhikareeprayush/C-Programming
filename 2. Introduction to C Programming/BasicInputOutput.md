# Basic Input/Output in C

## Introduction to `printf` and `scanf`

The `printf` and `scanf` functions are part of the Standard Input/Output library (`stdio.h`) in C. They are essential for interacting with users by displaying output and reading input, respectively.

---

## 1. `printf` Function

### Purpose:

- Used to print formatted output to the console.

### Syntax:

```c
int printf(const char *format, ...);
```

### Parameters:

- **`format`**: A string specifying how the output should be formatted. It can include text, escape sequences, and format specifiers.
- **`...`**: A variable number of arguments to be formatted and printed.

### Format Specifiers:

Format specifiers begin with `%` and define the type of data to be printed:

- `%d` or `%i`: Integer.
- `%f`: Floating-point number.
- `%c`: Character.
- `%s`: String.
- `%x` or `%X`: Hexadecimal integer.
- `%o`: Octal integer.
- `%%`: Prints a literal `%` character.

### Example:

```c
#include<stdio.h>

int main() {
    int age = 25;
    float pi = 3.14159;
    char grade = 'A';
    char name[] = "Alice";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Value of Pi: %.2f\n", pi);

    return 0;
}
```

#### Output:

```
Name: Alice
Age: 25
Grade: A
Value of Pi: 3.14
```

### Key Features:

- **Escape Sequences**:
  - `\n`: Newline.
  - `\t`: Horizontal tab.
  - `\\`: Backslash.
  - `\"`: Double quote.
- **Precision and Width**:
  - Example: `%8.2f` formats a floating-point number with 8 total characters, including 2 decimal places.

---

## 2. `scanf` Function

### Purpose:

- Used to read formatted input from the user.

### Syntax:

```c
int scanf(const char *format, ...);
```

### Parameters:

- **`format`**: A string specifying how the input should be interpreted.
- **`...`**: Pointers to variables where the input data will be stored.

### Format Specifiers:

Format specifiers are similar to those in `printf`, but the data is written into variables instead of being printed:

- `%d`: Reads an integer.
- `%f`: Reads a floating-point number.
- `%c`: Reads a single character.
- `%s`: Reads a string (stops at whitespace).

### Example:

```c
#include<stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("\nName: %s\nAge: %d\nHeight: %.2f cm\n", name, age, height);

    return 0;
}
```

#### Input:

```
Alice
25
167.5
```

#### Output:

```
Name: Alice
Age: 25
Height: 167.50 cm
```

### Key Points:

- **Address-of Operator (`&`)**:
  - Used to pass the memory address of variables for storing input.
  - Exception: For strings (`%s`), the variable name is sufficient (no `&` required).
- **Whitespace Handling**:
  - `%c` and `%s` behave differently with whitespace. For `%c`, leading whitespace must be cleared manually.

---

## 3. Common Pitfalls and Best Practices

### Common Mistakes:

1. **Missing `&` in `scanf`**:

   - Forgetting the address-of operator leads to undefined behavior.
   - Example (incorrect):
     ```c
     int num;
     scanf("%d", num); // Missing &
     ```

2. **Buffer Overflow**:
   - Reading strings without specifying a limit may cause overflow.
   - Example (risky):
     ```c
     char str[10];
     scanf("%s", str); // Unsafe if input exceeds 9 characters
     ```
   - Solution:
     ```c
     scanf("%9s", str); // Limits input to 9 characters
     ```

### Best Practices:

1. Always validate user input.
2. Use field width specifiers to prevent buffer overflows.
3. For complex input, consider using `fgets` instead of `scanf` for strings.

---

`printf` and `scanf` are powerful tools for interacting with users in C programs. Proper understanding and usage of these functions ensure robust and user-friendly applications.
