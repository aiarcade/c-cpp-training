#include <stdio.h>


void printMessage() {
    printf("Hello, World!\n");
}

int add(int a, int b) {
    return a + b;
}


int main() {
    // Declaring a function pointer
    void (*funcPtr)();
    
    // Assigning a function to the function pointer
    funcPtr = printMessage;
    
    // Calling the function using the function pointer
    funcPtr();
    
    // Declaring a function pointer for a function that takes two integers and returns an integer
    int (*mathFuncPtr)(int, int);
    
    // Assigning the add function to the function pointer
    mathFuncPtr = add;
    
    // Calling the function using the function pointer
    int result = mathFuncPtr(5, 3);
    printf("Result of addition: %d\n", result);
    
    return 0;
}

