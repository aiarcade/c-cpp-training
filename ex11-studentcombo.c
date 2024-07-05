#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char *name;
    int amount_in_hand;
    int weight;
} Student;

// Function to select students based on bitmask
Student* select_students(int num, Student* arr, int arr_size) {
    // Allocate memory for 10 Student structures
    Student *selected_students = (Student*)malloc(10 * sizeof(Student));
    if (selected_students == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Initialize selected_students weights to 0
    for (int i = 0; i < 10; i++) {
        selected_students[i].weight = 0;
        selected_students[i].name = NULL;  // Initialize pointer to NULL for safety
    }

    int j = 0;
    int numBits = sizeof(int) * 8;  // Number of bits in an int (typically 32)
    for (int i = numBits - 1; i >= 0 && j < 10; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1 && i < arr_size) {  // Ensure we don't exceed the size of arr
            // Copy the original student structure
            selected_students[j] = arr[i];
            j++;
        }
    }

    return selected_students;
}

int main() {
    // Create an array of students
    Student *students = (Student *)malloc(sizeof(Student) * 3);
    if (students == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize student data
    students[0].name = (char*)malloc(10);
    strcpy(students[0].name, "mahesh");
    students[0].weight = 45;
    students[0].amount_in_hand = 100;

    students[1].name = (char*)malloc(10);
    strcpy(students[1].name, "Raj");
    students[1].weight = 50;
    students[1].amount_in_hand = 200;

    students[2].name = (char*)malloc(10);
    strcpy(students[2].name, "Devi");
    students[2].weight = 46;
    students[2].amount_in_hand = 150;

    // Allocate and initialize for 8-bit patterns
    Student *selected = NULL;

    for (int i = 0; i < 8; i++) {
        selected = select_students(i, students, 3); // Pass size of original array
        printf("Selected students for pattern %d:\n", i);
        for (int j = 0; j < 10; j++) {
            if (selected[j].name != NULL) {  // Ensure valid student is printed
                printf("Name: %s, Amount in Hand: %d, Weight: %d\n",
                       selected[j].name,
                       selected[j].amount_in_hand,
                       selected[j].weight);
            }
        }
        printf("\n");

        free(selected);  // Free selected students after each pattern
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}
