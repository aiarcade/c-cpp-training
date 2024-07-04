#include <stdio.h>

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary
    
    // AND
    int and_result = a & b;
    printf("AND: %d\n", and_result);  // Output: 1 (0001 in binary)
    
    // OR
    int or_result = a | b;
    printf("OR: %d\n", or_result);  // Output: 7 (0111 in binary)
    
    // XOR
    int xor_result = a ^ b;
    printf("XOR: %d\n", xor_result);  // Output: 6 (0110 in binary)
    
    // NOT
    int not_result = ~a;
    printf("NOT: %d\n", not_result);  // Output: -6
    
    // Left Shift
    int left_shift_result = a << 1;
    printf("Left Shift: %d\n", left_shift_result);  // Output: 10 (1010 in binary)
    
    // Right Shift
    int right_shift_result = a >> 1;
    printf("Right Shift: %d\n", right_shift_result);  // Output: 2 (0010 in binary)
    
    return 0;
}
