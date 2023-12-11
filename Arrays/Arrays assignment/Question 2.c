// 23-2533
// Induli Shane Paul 
// ACS 113A - Structured Programming Assignment
// ARRAYS
// Question 2

#include <stdio.h>

int main() {
    // Declare an array of doubles with a size of 12
    double myArray[12];

    // Assign the specified values to the array
    myArray[0] = 500;
    myArray[1] = 700;
    myArray[2] = 345;
    myArray[3] = 789;
    myArray[4] = 234;
    myArray[5] = 567;
    myArray[6] = 123;
    myArray[7] = 345;
    myArray[8] = 398;
    myArray[9] = 456;
    myArray[10] = 970;
    myArray[11] = 1000;

    // Display the values on the screen
    printf("Values in the array:\n");
    for (int i = 0; i < 12; i++) {
        printf("%f\n", myArray[i]);
    }

    return 0;
}

