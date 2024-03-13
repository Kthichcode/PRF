#include <stdio.h>

// Function to calculate the GCD of two numbers
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two numbers
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    // Input two positive integers
    int a, b;
    printf("Enter the first positive integer: ");
    scanf("%d", &a);
    printf("Enter the second positive integer: ");
    scanf("%d", &b);

    // Check if the input values are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1; // Exit with an error code
    }

    // Calculate and display the GCD and LCM
    int gcd = calculateGCD(a, b);
    int lcm = calculateLCM(a, b);

    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0; // Exit successfully
}

