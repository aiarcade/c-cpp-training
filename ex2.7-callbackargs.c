#include <stdio.h>

// Function pointer declaration
void (*callbackFunc)(int, int);

// Function that takes a callback function as an argument
void performOperation(int a, int b, void (*callback)(int, int)) {
    // Perform some operation
    int result = a + b;
    
    // Call the callback function with the result
    callback(result, a);
}

// Callback function definition
void displayResult(int result, int originalA) {
    printf("The result of the operation is: %d\n", result);
    printf("The original value of 'a' was: %d\n", originalA);
}

int main() {
    int x = 5, y = 3;
    
    // Assigning a callback function to the function pointer
    callbackFunc = displayResult;
    
    // Calling performOperation with callbackFunc as the callback
    performOperation(x, y, callbackFunc);
    
    return 0;
}
