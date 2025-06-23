# 📂 File Handling in C

File handling in C allows you to perform operations like creating, reading, writing, and appending to files. This guide provides a comprehensive overview of C's file I/O using the `stdio.h` library.

---

## 📚 Table of Contents

1. [Introduction](#introduction)
2. [File Modes](#file-modes)
3. [File Operations](#file-operations)
4. [Common File Handling Functions](#common-file-handling-functions)
5. [Error Handling](#error-handling)
6. [Code Examples](#code-examples)
7. [Best Practices](#best-practices)
8. [References](#references)

---

## 🧠 Introduction

In C, files are handled using `FILE *` pointers and functions from the standard I/O library (`<stdio.h>`). The basic steps for working with files are:

1. Open the file using `fopen()`
2. Perform operations (read, write, etc.)
3. Close the file using `fclose()`

---

## 🗂️ File Modes

| Mode | Description |
|------|-------------|
| `"r"`   | Open for reading. File must exist. |
| `"w"`   | Open for writing. Creates file if it doesn't exist; truncates if it does. |
| `"a"`   | Open for appending. Creates file if it doesn't exist. |
| `"r+"`  | Open for both reading and writing. File must exist. |
| `"w+"`  | Open for reading and writing. Creates or truncates file. |
| `"a+"`  | Open for reading and appending. File is created if it doesn't exist. |

---

## ⚙️ File Operations

### 1. **Opening a File**

```c
FILE *fp = fopen("file.txt", "r");
````

### 2. **Reading from a File**

* `fgetc()` - Read one character
* `fgets()` - Read a line
* `fread()` - Read binary data

### 3. **Writing to a File**

* `fputc()` - Write one character
* `fputs()` - Write a string
* `fprintf()` - Formatted output
* `fwrite()` - Write binary data

### 4. **Closing a File**

```c
fclose(fp);
```

### 5. **File Positioning**

* `ftell(fp)` – Get current position
* `fseek(fp, offset, origin)` – Move file pointer
* `rewind(fp)` – Reset to beginning

---

## 🧰 Common File Handling Functions

| Function               | Purpose                 |
| ---------------------- | ----------------------- |
| `fopen()`              | Open file               |
| `fclose()`             | Close file              |
| `fgetc() / fputc()`    | Read/write character    |
| `fgets() / fputs()`    | Read/write string       |
| `fread() / fwrite()`   | Read/write binary block |
| `fprintf() / fscanf()` | Formatted I/O           |
| `feof()`               | Check end of file       |
| `ferror()`             | Check for error         |
| `rewind()`             | Reset file pointer      |
| `ftell()`              | Current position        |
| `fseek()`              | Move to position        |

---

## 🛠️ Error Handling

Always check if `fopen()` returned `NULL`:

```c
FILE *fp = fopen("file.txt", "r");
if (fp == NULL) {
    perror("Error opening file");
    return 1;
}
```

Other error handling tools:

* `feof(fp)` – Returns true if EOF is reached
* `ferror(fp)` – Returns true if an error occurred

---

## 💡 Code Examples

### Example 1: Reading a Text File

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        perror("Unable to open file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
```

---

### Example 2: Writing to a File

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        perror("File write error");
        return 1;
    }

    fprintf(fp, "Hello, file!\n");
    fclose(fp);
    return 0;
}
```

---

### Example 3: Appending to a File

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("log.txt", "a");
    if (fp == NULL) {
        perror("Error");
        return 1;
    }

    fputs("Log entry\n", fp);
    fclose(fp);
    return 0;
}
```

---

### Example 4: Binary File Write and Read

```c
#include <stdio.h>

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    FILE *fp = fopen("data.bin", "wb");
    fwrite(data, sizeof(int), 5, fp);
    fclose(fp);

    int readData[5];
    fp = fopen("data.bin", "rb");
    fread(readData, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++) {
        printf("%d ", readData[i]);
    }

    return 0;
}
```

---

## ✅ Best Practices

* Always check if file pointers are `NULL`.
* Always close files using `fclose()` to avoid memory leaks or file corruption.
* Use `binary` mode for non-text data.
* Use `fseek()` and `ftell()` for random access.
* Prefer `fgets()` over `gets()` to avoid buffer overflows.
* Use `perror()` or `strerror(errno)` for descriptive error messages.

---

## 🧪 Testing Tips

* Test all file modes (`r`, `w`, `a`, etc.)
* Validate file content after writing.
* Test edge cases: empty files, missing files, permission errors.
* Automate file cleanup in test scripts.
* Use mocks or temp files in unit tests.

---

## 🔗 References

* [C File I/O - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/c_file_io.htm)
* [C File Handling - GeeksforGeeks](https://www.geeksforgeeks.org/basics-file-handling-c/)
* [ISO C Standard: stdio.h](https://en.cppreference.com/w/c/io)

