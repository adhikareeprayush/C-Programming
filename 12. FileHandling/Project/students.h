#ifndef STUDENT_H
#define STUDENT_H

#include <stdbool.h>
#include <stdio.h>  
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


struct Student{
    char name[50];
    int age;
    float marks;
};

// function declarations
void clear_buffer();
bool enter_students(const char fileName[]);
void read_students(const char fileName[]);
void search_students(const char fileName[]);


#endif