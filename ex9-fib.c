#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("Fibonacci number at position %d is %d\n", n, result);

    return 0;
}
