#ifndef FUNCTIONS3_H
#define FUNCTIONS3_H

struct Student {
    int id;
    char name[50];
    float gpa;
    int age;
};

typedef struct Student Student;

// Function prototypes
Student* create_student(int id, const char* name, float gpa, int age);
void display_student(Student* student);
void free_student(Student* student);
void bubble_sort_by_age(Student* students[], int count);

#endif 
