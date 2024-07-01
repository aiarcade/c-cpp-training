#include <stdio.h>

void modifyValue(int *ptr) {
    *ptr = 20;
}



int main() {
    // Basic pointer declaration and assignment
    int num = 10;
    int *ptr = &num;
    modifyValue(ptr);
    printf("Value after function call %d\n",*ptr);
    return 0;
}

