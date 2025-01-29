# Conditional Statements in C

Conditional statements in C are used to make decisions based on certain conditions. They allow the program to execute different blocks of code depending on whether a condition is true or false. The primary conditional statements in C are `if`, `else`, and `switch`.

## 1. The `if` Statement

The `if` statement is the most basic conditional statement. It evaluates a condition, and if the condition is true, the block of code inside the `if` statement is executed.

### Syntax:
```c
if (condition) {
    // Code to execute if the condition is true
}
```

### Example:
```c
#include <stdio.h>

int main() {
    int number = 10;

    if (number > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
```

### Explanation:
- The condition `number > 0` is evaluated.
- If the condition is true (i.e., `number` is greater than 0), the message "The number is positive." is printed.
- If the condition is false, the code inside the `if` block is skipped.

## 2. The `if-else` Statement

The `if-else` statement extends the `if` statement by providing an alternative block of code to execute if the condition is false.

### Syntax:
```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

### Example:
```c
#include <stdio.h>

int main() {
    int number = -5;

    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
```

### Explanation:
- The condition `number > 0` is evaluated.
- If the condition is true, the message "The number is positive." is printed.
- If the condition is false, the message "The number is not positive." is printed.

## 3. The `if-else if-else` Statement

The `if-else if-else` statement allows you to check multiple conditions in sequence. The first condition that evaluates to true will have its corresponding block of code executed. If none of the conditions are true, the `else` block (if present) will be executed.

### Syntax:
```c
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition2 is true
} else {
    // Code to execute if all conditions are false
}
```

### Example:
```c
#include <stdio.h>

int main() {
    int number = 0;

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```

### Explanation:
- The first condition `number > 0` is evaluated. If true, "The number is positive." is printed.
- If the first condition is false, the second condition `number < 0` is evaluated. If true, "The number is negative." is printed.
- If both conditions are false, the `else` block is executed, printing "The number is zero."

## 4. The `switch` Statement

The `switch` statement is used to select one of many code blocks to be executed. It is often used as an alternative to a series of `if-else if` statements when dealing with multiple conditions based on the value of a single variable.

### Syntax:
```c
switch (expression) {
    case constant1:
        // Code to execute if expression equals constant1
        break;
    case constant2:
        // Code to execute if expression equals constant2
        break;
    ...
    default:
        // Code to execute if expression doesn't match any case
}
```

### Example:
```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

### Explanation:
- The `switch` statement evaluates the value of `day`.
- Depending on the value of `day`, the corresponding `case` block is executed.
- The `break` statement is used to exit the `switch` statement once a matching `case` is found. Without `break`, the program would continue executing the following `case` blocks (this is known as "fall-through").
- If no `case` matches the value of `day`, the `default` block is executed, printing "Invalid day."

### Important Notes:
- The `expression` in the `switch` statement must be of an integer type (e.g., `int`, `char`).
- The `case` constants must be unique and of the same type as the `expression`.
- The `default` case is optional and is executed if no other `case` matches the `expression`.

## 5. Nested Conditional Statements

Conditional statements can be nested within each other to create more complex decision-making structures.

### Example:
```c
#include <stdio.h>

int main() {
    int number = 10;

    if (number > 0) {
        if (number % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive and odd.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
```

### Explanation:
- The outer `if` statement checks if `number` is positive.
- If `number` is positive, the inner `if` statement checks if `number` is even or odd.
- Depending on the results of these checks, the appropriate message is printed.

## Conclusion

Conditional statements are fundamental to controlling the flow of a program in C. They allow you to execute different blocks of code based on specific conditions, making your programs more dynamic and flexible. Understanding how to use `if`, `else`, and `switch` statements effectively is crucial for writing efficient and readable code.