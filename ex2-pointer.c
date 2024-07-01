#include <stdio.h>

// Function that modifies the value at the pointer address
void modifyValue(int *ptr) {
    *ptr = 20;
}

// Function that demonstrates passing arrays as pointers
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    // Basic pointer declaration and assignment
    int num = 10;
    int *ptr = &num;

    printf("Address of num: %p\n", (void *)&num);
    printf("Address stored in ptr: %p\n", (void *)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify the value using a pointer
    *ptr = 15;
    printf("Value of num after modification through ptr: %d\n", num);

    // Pointer arithmetic
    int arr[] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;

    printf("\nPointer arithmetic demonstration:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(arrPtr + i), (void *)(arrPtr + i));
    }

    // Passing pointer to a function
    printf("\nPassing pointer to a function:\n");
    modifyValue(ptr);
    printf("Value of num after modifyValue: %d\n", num);

    // Using pointers with arrays
    printf("\nUsing pointers with arrays:\n");
    printArray(arr, 5);

    // Pointer to pointer (double pointer)
    int **doublePtr = &ptr;
    printf("\nPointer to pointer (double pointer) demonstration:\n");
    printf("Address of ptr: %p\n", &ptr);
    printf("Address stored in doublePtr: %p\n", doublePtr);
    printf("Value pointed to by doublePtr: %p\n", *doublePtr);
    printf("Value pointed to by the address in doublePtr: %d\n", **doublePtr);

    return 0;
}
