#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;  // Point to the beginning of the array

    // Accessing elements using pointer arithmetic
    printf("Element at position 0: %d\n", *ptr);    // Output: 1
    printf("Element at position 1: %d\n", *(ptr + 1));  // Output: 2
    printf("Element at position 2: %d\n", *(ptr + 2));  // Output: 3

    // Adding an integer to the pointer
    int offset = 2;
    int *newPtr = ptr + offset;

    // Accessing elements using the new pointer
    printf("Element at position %d: %d\n", offset, *newPtr);  // Output: 3

    return 0;
}
