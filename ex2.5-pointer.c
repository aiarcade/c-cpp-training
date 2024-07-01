#include <stdio.h>
#include <stdlib.h>

// Define a structure called Student
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declare a pointer to a Student structure
    struct Student *ptr;

    // Allocate memory for a Student structure
    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the structure members using the pointer
    printf("Enter student's name: ");
    scanf("%49s", ptr->name); // Use %49s to prevent buffer overflow
    printf("Enter student's age: ");
    scanf("%d", &ptr->age);
    printf("Enter student's GPA: ");
    scanf("%f", &ptr->gpa);

    // Print the values of the structure members
    printf("\nStudent Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("GPA: %.2f\n", ptr->gpa);

    // Free the allocated memory
    free(ptr);

    return 0;
}
