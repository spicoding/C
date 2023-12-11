#include <stdio.h>

int main() {
    // Declare an array of doubles with a size of 20
    double myArray[20];

    // Prompt the user to enter 20 values
    printf("Enter 20 values, one at a time:\n");

    // Loop to read input from the user and store in the array
    for (int i = 0; i < 20; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &myArray[i]);
    }

    // Display the entered values on the screen
    printf("\nValues in the array:\n");
    for (int i = 0; i < 20; i++) {
        printf("%f\n", myArray[i]);
    }

    return 0;
}

