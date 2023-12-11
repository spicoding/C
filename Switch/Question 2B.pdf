// 23-2533
// Induli Shane Paul 
// ACS 113A - Structured Programming Assignment
// ARRAYS
// Question 2(Switch case as a character)

#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation;

    // Input
    printf("Enter two integers (num1 and num2): ");
    scanf("%d %d", &num1, &num2);

    // Choose operation
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform operation using switch statement
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Cannot divide by zero.\n");
                return 1; // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            return 1; // Exit with an error code
    }

    // Output the result
    printf("Result: %d\n", result);

    return 0;
}

