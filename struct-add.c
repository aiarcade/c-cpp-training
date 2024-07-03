#include <stdio.h>
#include <stdlib.h>

// Define a structure called Student
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {

    struct Student stud;

    // Allocate memory for a Student structure

    // Assign values to the structure members using the pointer
    printf("Enter student's name: ");
    scanf("%49s", stud.name); // Use %49s to prevent buffer overflow
    printf("Enter student's age: ");
    scanf("%d", &stud.age);
    printf("Enter student's GPA: ");
    scanf("%f", &stud.gpa);

    // Print the values of the structure members
    printf("\nStudent Information:\n");
    printf("Name: %s\n", stud.name);
    printf("Age: %d\n", stud.age);
    printf("GPA: %.2f\n", stud.gpa);

    // Free the allocated memory
   
    return 0;
}
