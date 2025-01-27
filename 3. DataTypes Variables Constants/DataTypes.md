# Data Types in C

## Introduction

In C, data types specify the type of data a variable can hold. They determine the size and format of data stored in memory. C provides a rich set of data types broadly categorized into:

1. **Basic Data Types** (e.g., `int`, `float`, `char`)
2. **Derived Data Types** (e.g., arrays, pointers, structures, unions)
3. **Enumeration Data Types**
4. **Void Data Type**

---

## 1. Basic Data Types

These are the fundamental building blocks for variables.

### 1.1 Integer (`int`)

- **Purpose**: Stores whole numbers.
- **Size**: Typically 4 bytes (varies by platform).
- **Range**: Depends on the system. For a 32-bit system:
  - Signed: `-2,147,483,648` to `2,147,483,647`
  - Unsigned: `0` to `4,294,967,295`

#### Example:

```c
int age = 25;
unsigned int positiveNumber = 100;
```

### 1.2 Floating-Point (`float`, `double`)

- **Purpose**: Stores real numbers (with decimals).

#### `float`

- **Size**: Typically 4 bytes.
- **Precision**: \~6 decimal places.

#### `double`

- **Size**: Typically 8 bytes.
- **Precision**: \~15 decimal places.

#### Example:

```c
float pi = 3.14f;
double precisePi = 3.141592653589;
```

### 1.3 Character (`char`)

- **Purpose**: Stores a single character or small integer.
- **Size**: 1 byte.
- **Range**:
  - Signed: `-128` to `127`
  - Unsigned: `0` to `255`

#### Example:

```c
char grade = 'A';
```

### 1.4 Boolean (`_Bool`)

- **Purpose**: Represents a boolean value (true/false).
- **Size**: 1 byte.
- **Values**: `0` (false) or `1` (true).

#### Example:

```c
#include <stdbool.h>

_Bool isPass = 1; // True
```

---

## 2. Derived Data Types

### 2.1 Arrays

- **Purpose**: Stores a fixed-size sequential collection of elements of the same type.

#### Example:

```c
int numbers[5] = {1, 2, 3, 4, 5};
```

### 2.2 Pointers

- **Purpose**: Stores the memory address of a variable.

#### Example:

```c
int num = 10;
int *ptr = &num;
```

### 2.3 Structures

- **Purpose**: Groups different types of data under one name.

#### Example:

```c
struct Person {
    char name[50];
    int age;
};
```

### 2.4 Unions

- **Purpose**: Similar to structures, but all members share the same memory location.

#### Example:

```c
union Data {
    int i;
    float f;
};
```

---

## 3. Enumeration Data Type (`enum`)

- **Purpose**: Defines a set of named integer constants.

#### Example:

```c
enum Day {MON, TUE, WED};
enum Day today = MON;
```

---

## 4. Void Data Type

- **Purpose**: Represents "no type." Often used for functions that do not return a value.

#### Example:

```c
void greet() {
    printf("Hello, World!\n");
}
```

---

## Summary Table

| Data Type | Size (Bytes) | Example Usage       |
| --------- | ------------ | ------------------- |
| `int`     | 4            | `int age = 25;`     |
| `float`   | 4            | `float pi = 3.14;`  |
| `double`  | 8            | `double x = 2.718;` |
| `char`    | 1            | `char c = 'A';`     |
| `bool`    | 1            | `_Bool flag = 1;`   |

C provides a comprehensive set of data types to handle various kinds of data efficiently. Choosing the appropriate data type is crucial for writing robust and optimized programs.
