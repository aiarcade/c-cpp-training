#include <stdio.h>

long fibs[100];

long fibonacci(int n) {
    long fib=0;
    if (n <= 1) {
        return n;
    } else {
        if(fibs[n]!=-1)
        {
            return fibs[n];
        }
        else
        {
            fib=fibonacci(n - 1) + fibonacci(n - 2);
            fibs[n]=fib;
            return fib;
        }
    }
}

int main() {
    int n,i;
    for(i=0;i<100;i++)
    {
        fibs[i]=-1;
    }
    
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    long result = fibonacci(n);
    printf("Fibonacci number at position %d is %ld \n", n, result);

    return 0;
}
