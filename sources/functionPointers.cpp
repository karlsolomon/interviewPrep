#include <stdio.h>

// Define a struct with function pointers for arithmetic operations
typedef struct {
    int (*add)(int, int);
} ArithmeticOperations;

// Define the functions for arithmetic operations
int add(int a, int b) { return a + b; }

int main() {
    // Initialize the struct with function pointers
    ArithmeticOperations ops;
    ops.add = add;
    // Use the function pointers to perform operations
    int x = 10, y = 5;
    printf("Add: %d + %d = %d\n", x, y, ops.add(x, y));
    return 0;
}
