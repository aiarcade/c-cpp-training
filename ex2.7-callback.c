#include <stdio.h>

// Function prototype for the callback
void callbackExample(void (*callbackFunc)());

// Function that will be used as a callback
void myCallback() {
    printf("This is a callback function.\n");
}

int main() {
    // Passing the callback function to another function
    callbackExample(myCallback);
    return 0;
}

void callbackExample(void (*callbackFunc)()) {
    printf("Inside callbackExample function.\n");
    // Calling the callback function
    callbackFunc();
}
