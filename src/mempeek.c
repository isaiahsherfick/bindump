#include <stdio.h>
#include <stdlib.h>

void printbits(unsigned char* data, size_t size) {
    for (size_t i = 0; i < size; i++) {
        for (int j = 7; j >= 0; j--) {
            // Use bitwise operations to extract each bit
            printf("%d", (data[i] >> j) & 1);
        }
        printf("\n"); 
    }
}

int main() {
    // Read input until newline (Enter) is encountered
    int c;
    size_t capacity = 10; // Initial capacity of the dynamic array
    size_t size = 0;
    char* data = (char*)malloc(capacity * sizeof(char));

    // Check if memory allocation was successful
    if (data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    while ((c = getchar()) != '\n' && c != EOF) {
        // Resize the array if needed
        if (size == capacity) {
            capacity *= 2; // Double the capacity
            data = (char*)realloc(data, capacity * sizeof(char));

            // Check if memory reallocation was successful
            if (data == NULL) {
                fprintf(stderr, "Memory reallocation failed\n");
                free(data); // Free the previously allocated memory
                return 1;
            }
        }

        // Store the character in the array
        data[size++] = c;
    }

    // Print the raw 0s and 1s of the array
    printbits((unsigned char*)data, size);

    // Free dynamically allocated memory
    free(data);

    return 0;
}
