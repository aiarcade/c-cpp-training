
#include <stdio.h>
#include "functions2.h"

int main() {
    // Create a new student
    Student* student1 = create_student(1, "John Doe", 3.75);
    
    // Display student information
    display_student(student1);
    
    // Free the allocated memory
    free_student(student1);
    
    return 0;
}
