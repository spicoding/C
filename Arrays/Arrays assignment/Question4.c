#include <stdio.h>

int main() {
    // Declare an array of doubles with a size of 10
    double myArray[10];

    // Prompt the user to enter 10 values
    printf("Enter 10 values, one at a time:\n");

    // Loop to read input from the user and store in the array
    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &myArray[i]);
    }

    // Display the values in reverse order
    printf("\nValues in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%f\n", myArray[i]);
    }

    return 0;
}

