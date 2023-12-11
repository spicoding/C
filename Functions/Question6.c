#include <stdio.h>

// Function prototype
int MULTIPLY(int num);

int main() {
    // Get an integer from the user
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);

    // Call the MULTIPLY function and display the result
    int result = MULTIPLY(input);
    printf("Result after multiplication: %d\n", result);

    return 0;
}

// Function definition for MULTIPLY
int MULTIPLY(int num) {
    return num * 100;
}

