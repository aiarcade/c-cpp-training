#include <stdio.h>

// Function pointer typedef
typedef int (*Operation)(int, int);

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int result;
    
    // Declare function pointers of type 'Operation'
    Operation operationPtr;

    // Assign 'add' function to the function pointer
    operationPtr = add;
    result = operationPtr(10, 5);
    printf("Result of addition: %d\n", result);

    // Assign 'subtract' function to the function pointer
    operationPtr = subtract;
    result = operationPtr(10, 5);
    printf("Result of subtraction: %d\n", result);

    return 0;
}
