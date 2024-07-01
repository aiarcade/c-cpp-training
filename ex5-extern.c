
#include <stdio.h>
#include "functions2.h"

#define MAX_STUDENTS 10

int main() {
    // Create a new student
    Student *students[MAX_STUDENTS];
    students[0] = create_student(1, "John Doe", 3.75);
    students[1] = create_student(2, "Jane Smith", 3.85);

    // Display information for all students in the array
    for (int i = 0; i < 2; ++i) {
        printf("Student %d:\n", i + 1);
        display_student(students[i]);
        printf("\n");
    }

    // Free allocated memory for each student
    for (int i = 0; i < 2; ++i) {
        free_student(students[i]);
    }

    return 0;
  
}
