# Operators in C

## Introduction

Operators in C are symbols used to perform operations on variables and values. They are the foundation of any C program, enabling arithmetic, logical comparisons, assignments, and much more.

---

## Types of Operators in C

### 1. **Arithmetic Operators**

Used for basic mathematical operations.

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (remainder) | `a % b` |

#### Example:

```c
int a = 10, b = 3;
printf("Sum: %d\n", a + b);  // Output: 13
printf("Remainder: %d\n", a % b);  // Output: 1
```

---

### 2. **Relational (Comparison) Operators**

Used to compare two values.

| Operator | Description              | Example  |
| -------- | ------------------------ | -------- |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |

#### Example:

```c
int a = 5, b = 10;
if (a < b) {
    printf("a is less than b\n");
}
```

---

### 3. **Logical Operators**

Used for logical operations.

| Operator | Description | Example  |
| -------- | ----------- | -------- | ---------- | --- | --- | --- |
| `&&`     | Logical AND | `a && b` |
| `        |             | `        | Logical OR | `a  |     | b`  |
| `!`      | Logical NOT | `!a`     |

#### Example:

```c
int a = 1, b = 0;
if (a && b) {
    printf("Both are true\n");
} else {
    printf("One or both are false\n");
}
```

---

### 4. **Bitwise Operators**

Operate on individual bits.

| Operator | Description        | Example    |
| -------- | ------------------ | ---------- | --- | --- |
| `&`      | Bitwise AND        | `a & b`    |
| `        | `                  | Bitwise OR | `a  | b`  |
| `^`      | Bitwise XOR        | `a ^ b`    |
| `~`      | Bitwise Complement | `~a`       |
| `<<`     | Left Shift         | `a << b`   |
| `>>`     | Right Shift        | `a >> b`   |

#### Example:

```c
int a = 5;  // Binary: 0101
int b = 3;  // Binary: 0011
printf("Bitwise AND: %d\n", a & b);  // Output: 1
```

---

### 5. **Assignment Operators**

Used to assign values to variables.

| Operator | Description         | Example  |
| -------- | ------------------- | -------- |
| `=`      | Simple assignment   | `a = b`  |
| `+=`     | Add and assign      | `a += b` |
| `-=`     | Subtract and assign | `a -= b` |
| `*=`     | Multiply and assign | `a *= b` |
| `/=`     | Divide and assign   | `a /= b` |
| `%=`     | Modulus and assign  | `a %= b` |

#### Example:

```c
int a = 10;
a += 5;  // Equivalent to a = a + 5
printf("%d\n", a);  // Output: 15
```

---

### 6. **Unary Operators**

Operate on a single operand.

| Operator | Description        | Example        |
| -------- | ------------------ | -------------- |
| `+`      | Unary plus         | `+a`           |
| `-`      | Unary minus        | `-a`           |
| `++`     | Increment          | `++a` or `a++` |
| `--`     | Decrement          | `--a` or `a--` |
| `sizeof` | Size of a variable | `sizeof(a)`    |

#### Example:

```c
int a = 10;
printf("Size of int: %lu\n", sizeof(a));  // Output: 4 (platform-dependent)
```

---

### 7. **Conditional (Ternary) Operator**

Used for concise if-else statements.

| Syntax                      | Description                                                      |
| --------------------------- | ---------------------------------------------------------------- |
| `condition ? expr1 : expr2` | If `condition` is true, `expr1` is evaluated; otherwise `expr2`. |

#### Example:

```c
int a = 5, b = 10;
int max = (a > b) ? a : b;
printf("Max: %d\n", max);
```

---

### 8. **Special Operators**

#### **Comma Operator**

Used to separate expressions, evaluating left-to-right.

```c
int a, b;
a = (b = 3, b + 2);  // b is assigned 3, then a becomes 5
```

#### **Pointer Operators**

Used for pointer manipulation.

| Operator | Description                    | Example |
| -------- | ------------------------------ | ------- |
| `*`      | Dereference (value at address) | `*ptr`  |
| `&`      | Address-of operator            | `&var`  |

---

## Operator Precedence

Operators in C follow a specific precedence order when evaluated. For example:

| Precedence | Operators      |
| ---------- | -------------- |
| High       | `()` `++` `--` |
| Medium     | `*` `/` `%`    |
| Low        | `+` `-`        |

#### Example:

```c
int a = 10, b = 5, c = 2;
int result = a - b * c;  // Multiplication happens first
printf("%d\n", result);  // Output: 0
```

---

## Conclusion

Understanding operators in C is crucial for efficient programming. Always be mindful of operator precedence and associativity when writing complex expressions. Practice using these operators in various contexts to master their use.

---

Would you like to expand on any specific section, or should I include examples of common mistakes and debugging tips?
