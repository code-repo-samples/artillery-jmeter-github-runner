#include <stdio.h>

/*
 * Main function - entry point of the program
 * Demonstrates basic input/output and addition
 */
int main() {
    int a, b, sum;

    // Display a simple message
    printf("Hello, World!\n");

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Display result
    printf("Sum = %d\n", sum);

    return 0; // Indicate successful execution
}
