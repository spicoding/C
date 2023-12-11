#include <stdio.h>
#include <math.h>

int main() {
    // Display the square root of numbers 1 to 50 using a for loop
    printf("Number\tSquare Root\n");
    for (int i = 1; i <= 50; i++) {
        double squareRoot = sqrt(i);
        printf("%d\t%f\n", i, squareRoot);
    }

    return 0;
}

