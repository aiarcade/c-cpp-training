// student.h
#ifndef FUNCTIONS2_H
#define FUNCTIONS2_H

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float gpa;
};

typedef struct Student Student;

// Function prototypes
Student* create_student(int id, const char* name, float gpa);
void display_student(Student* student);
void free_student(Student* student);

#endif // STUDENT_H
