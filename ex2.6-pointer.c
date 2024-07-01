#include <stdio.h>

int main() {
    FILE *fp; // File pointer
    char data[100]; // Array to store data
    
    // Open file for writing
    fp = fopen("example.txt", "w");
    
    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write data to file
    fprintf(fp, "Hello, File Handling in C!\n");
    fprintf(fp, "This is a simple example.\n");
    
    // Close file
    fclose(fp);
    
    // Open file for reading
    fp = fopen("example.txt", "r");
    
    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Read and print data from file
    printf("Contents of file:\n");
    while (fgets(data, 100, fp) != NULL) {
        printf("%s", data);
    }
    
    // Close file
    fclose(fp);
    
    return 0;
}
