#include <stdio.h>
#include "functions.h"



int main() {
    // Basic pointer declaration and assignment
    int num = 10;
    int *ptr = &num;
    modifyValue(ptr);
    printf("Value after function call %d\n",*ptr);
    return 0;
}

