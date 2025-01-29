# Loops in C

Loops are used in C to execute a block of code multiple times based on a condition. There are three main types of loops in C:

## 1. For Loop
The `for` loop is used when the number of iterations is known beforehand. It consists of three parts:
- Initialization: executed once before the loop starts.
- Condition: checked before each iteration; if false, the loop stops.
- Increment/Decrement: updates the loop control variable.

### Syntax:
```c
for(initialization; condition; increment/decrement) {
    // Code to be executed
}
```

### Example:
```c
#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

## 2. While Loop
The `while` loop is used when the number of iterations is not known beforehand. It executes as long as the condition remains true.

### Syntax:
```c
while(condition) {
    // Code to be executed
}
```

### Example:
```c
#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 5) {
        printf("Iteration %d\n", i);
        i++;
    }
    return 0;
}
```

## 3. Do-While Loop
The `do-while` loop is similar to the `while` loop, but it ensures the code runs at least once before checking the condition.

### Syntax:
```c
do {
    // Code to be executed
} while(condition);
```

### Example:
```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while(i <= 5);
    return 0;
}
```

## Choosing the Right Loop
- Use `for` when the number of iterations is known.
- Use `while` when the condition must be checked before execution.
- Use `do-while` when execution must happen at least once.

