# Break and Continue in C

The `break` and `continue` statements are used to control the flow of loops in C. These statements provide a way to exit or skip iterations based on specific conditions.

## Break Statement
The `break` statement is used to exit a loop immediately, regardless of the loop's condition. It is commonly used when a specific condition is met, and further iterations are unnecessary.

### Syntax:
```c
break;
```

### Example:
```c
#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break; // Exits the loop when i equals 5
        }
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

## Continue Statement
The `continue` statement is used to skip the current iteration and proceed to the next iteration of the loop. It is useful when certain iterations should be ignored without exiting the loop.

### Syntax:
```c
continue;
```

### Example:
```c
#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue; // Skips iteration when i equals 5
        }
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

## Difference Between Break and Continue
- `break` terminates the loop entirely when the condition is met.
- `continue` skips only the current iteration and continues with the next one.

