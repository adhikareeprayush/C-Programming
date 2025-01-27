# Constants in C

## Introduction

Constants are fixed values in a C program that do not change during the execution of the program. These values can be of any data type and are defined using `const` or `#define`.

---

## 1. Using `const`

The `const` keyword is used to declare variables as constants. Once declared, their values cannot be modified.

### Syntax:

```c
const <data_type> <variable_name> = <value>;
```

#### Example:

```c
#include <stdio.h>

int main() {
    const float PI = 3.14159;
    printf("The value of PI is: %.2f\n", PI);

    // PI = 3.14; // Error: assignment of read-only variable

    return 0;
}
```

### Key Points:

1. The `const` keyword enforces immutability of the variable.
2. Constants declared with `const` are type-checked by the compiler.
3. You can use pointers with `const` to protect data.

#### Example with Pointer:

```c
const int num = 10;
const int *ptr = &num; // Pointer to a constant integer
// *ptr = 20; // Error: Cannot modify the value through the pointer
```

---

## 2. Using `#define`

The `#define` directive creates a macro, which is a constant or expression that replaces occurrences of the macro name throughout the code.

### Syntax:

```c
#define <name> <value>
```

#### Example:

```c
#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * (r) * (r)) // Macro with arguments

int main() {
    printf("The value of PI is: %.2f\n", PI);
    printf("The area of a circle with radius 5 is: %.2f\n", AREA(5));

    return 0;
}
```

### Key Points:

1. `#define` is a preprocessor directive, and the substitution occurs before compilation.
2. Does not enforce type-checking.
3. Allows defining macros with arguments (use parentheses to avoid precedence issues).

#### Example:

```c
#define SQUARE(x) ((x) * (x))

int main() {
    int num = 4;
    printf("The square of %d is %d\n", num, SQUARE(num));
    return 0;
}
```

---

## Differences Between `const` and `#define`

| Feature              | `const`             | `#define`                 |                         |
| -------------------- | ------------------- | ------------------------- | ----------------------- |
|                      | **Scope**           | Follows block scope rules | Global (no scope rules) |
| **Type Checking**    | Yes                 | No                        |                         |
| **Debugger Support** | Visible to debugger | Not visible               |                         |
| **Memory Usage**     | Allocated memory    | No memory allocated       |                         |
| **Flexibility**      | Immutable variable  | Text replacement only     |                         |

---

## Best Practices

1. Use `const` for typed, immutable variables to benefit from type checking and debugging support.
2. Use `#define` for compile-time constants or macros for values that do not need type information.
3. Prefer `inline` functions over macros for complex expressions to ensure type safety.
4. Always use parentheses in macros to avoid operator precedence errors.

#### Example of Safe Macro:

```c
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```

---

Constants help make programs more readable and maintainable by using meaningful names instead of hardcoding values. Choosing the right method (`const` or `#define`) depends on the specific use case.
