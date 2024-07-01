#include <stdio.h>
#include <stdlib.h>
#include "functions2.h" // Assuming you have student.h with struct Student and create_student function

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
        fprintf(fp, "%d;%s;%.2f\n", students[i]->id, students[i]->name, students[i]->gpa);
    }

    fclose(fp); // Close the file
}

int main() {
    // Array to hold students
    Student* students[MAX_STUDENTS];

    // Initialize students using create_student function
    students[0] = create_student(1, "John Doe", 3.75);
    students[1] = create_student(2, "Jane Smith", 3.85);

    // Store students' information in a file
    store_students("students.txt", students, 2);

    // Free allocated memory for each student
    for (int i = 0; i < 2; ++i) {
        free_student(students[i]);
    }

    return 0;
}
