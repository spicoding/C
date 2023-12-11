// 23-2533
// Induli Shane Paul 
// ACS 113A - Structured Programming Assignment
// Loops
// Question 6

#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter an integer value: ");
    scanf("%d", &num);

    // Display the message "KEEP IT UP!!" num times
    for (int i = 0; i < num; ++i) {
        printf("KEEP IT UP!!\n");
    }

    return 0;
}

