#include <stdio.h>
#include "variables.h"

int main() {
    printf("Initial value of globalVar: %d\n", globalVar);
    
    // Call function to increment the global variable
    incrementGlobalVar();
    
    printf("Value of globalVar after increment: %d\n", globalVar);
    
    return 0;
}
