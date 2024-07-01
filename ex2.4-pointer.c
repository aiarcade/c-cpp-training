#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n;

    // Number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array using malloc
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    // Print the array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}
