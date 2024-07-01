// student.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions2.h"

// Function to create a new student
Student* create_student(int id, const char* name, float gpa) {
    // Allocate memory for a new student
    Student* new_student = (Student*)malloc(sizeof(Student));
    
    // Assign values to the student
    new_student->id = id;
    strncpy(new_student->name, name, sizeof(new_student->name) - 1);
    new_student->name[sizeof(new_student->name) - 1] = '\0'; // Ensure null termination
    new_student->gpa = gpa;
    
    return new_student;
}

// Function to display student information
void display_student(Student* student) {
    if (student != NULL) {
        printf("Student ID: %d\n", student->id);
        printf("Student Name: %s\n", student->name);
        printf("Student GPA: %.2f\n", student->gpa);
    } else {
        printf("Student data is NULL\n");
    }
}

// Function to free the allocated memory for a student
void free_student(Student* student) {
    if (student != NULL) {
        free(student);
        student = NULL;
    }
}
