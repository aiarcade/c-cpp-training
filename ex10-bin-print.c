#include <stdio.h>

// Function to print binary representation of an integer
void printBinary(int num) {
    // Determine the number of bits
    int numBits = sizeof(int) * 8;  // Number of bits in an int (typically 32)

    // Iterate through each bit from the most significant to the least significant
    for (int i = numBits - 1; i >= 0; i--) {
        // Extract the i-th bit using a bitwise AND and a bit shift
        int bit = (num >> i) & 1;
        printf("%d", bit);
        
        // Print a space every 4 bits for readability
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int num;

    // Test the function with a sample integer
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary representation of %d: ", num);
    printBinary(num);

    return 0;
}
