#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function to demonstrate access to the global variable
void incrementGlobalVar() {
    globalVar++;
}

int main() {

    auto int x=10;
    printf("Initial value of globalVar: %d\n", globalVar);
    
    // Call function to increment global variable
    incrementGlobalVar();
    
    printf("Value of globalVar after increment: %d\n", globalVar);
    
    return 0;
}
