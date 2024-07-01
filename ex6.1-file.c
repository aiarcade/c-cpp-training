#include <stdio.h>
#include <stdlib.h>
#include "functions2.h" // Assuming you have student.h with struct Student and create_student function

#define MAX_STUDENTS 100

// Function to retrieve student information from a file
int retrieve_students(const char* filename, Student* students[]) {
    FILE* fp = fopen(filename, "r"); // Open file for reading

    if (fp == NULL) {
        perror("Error opening file");
        return 0;
    }

    int count = 0;
    int id;
    char name[50];
    float gpa;

    // Read each student's information from the file
    while (fscanf(fp, "%d;%[^;];%f\n", &id, name, &gpa) == 3) {
        students[count] = create_student(id, name, gpa);
        count++;
    }

    fclose(fp); // Close the file

    return count; // Return the number of students read
}

int main() {
    // Array to hold students
    Student* students[MAX_STUDENTS];

    // Retrieve students' information from a file
    int student_count = retrieve_students("students.txt", students);

    // Display information for all students retrieved from the file
    for (int i = 0; i < student_count; ++i) {
        printf("Student %d:\n", i + 1);
        display_student(students[i]);
        printf("\n");
    }

    // Free allocated memory for each student
    for (int i = 0; i < student_count; ++i) {
        free_student(students[i]);
    }

    return 0;
}
