#include <stdio.h>
#include "functions3.h"

#define MAX_STUDENTS 100

// Function to store student information in a file
void store_students(const char* filename, Student* students[], int count) {
    FILE* fp = fopen(filename, "w"); // Open file for writing

    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    // Write each student's information to the file
    for (int i = 0; i < count; ++i) {
        fprintf(fp, "%d;%s;%.2f;%d\n", students[i]->id, students[i]->name, students[i]->gpa, students[i]->age);
    }

    fclose(fp); // Close the file
}

int main() {
    // Array to hold students
    Student* students[MAX_STUDENTS];

    // Initialize students using create_student function
    students[0] = create_student(1, "John Doe", 3.75, 21);
    students[1] = create_student(2, "Jane Smith", 3.85, 20);
    students[2] = create_student(3, "Mike Johnson", 3.65, 22);

    int student_count = 3;

    // Sort students by age using bubble sort
    bubble_sort_by_age(students, student_count);

    // Display information for all students in the sorted array
    printf("Sorted Students by Age:\n");
    for (int i = 0; i < student_count; ++i) {
        printf("Student %d:\n", i + 1);
        display_student(students[i]);
        printf("\n");
    }

    // Store students' information in a file
    store_students("students.txt", students, student_count);

    // Free allocated memory for each student
    for (int i = 0; i < student_count; ++i) {
        free_student(students[i]);
    }

    return 0;
}
