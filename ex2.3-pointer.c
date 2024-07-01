#include <stdio.h>

int main() {



    int arr[] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(arrPtr + i), (arrPtr + i));
    }
}