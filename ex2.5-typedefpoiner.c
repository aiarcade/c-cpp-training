#include <stdio.h>
typedef int* IntPtr;

int main() {
    int value = 20;
    IntPtr ptr = &value;

    printf("Value: %d\n", *ptr);
    return 0;
}
