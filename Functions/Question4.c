#include <stdio.h>

int main() {
    // Declare an array to store the first name (assuming a reasonable maximum length)
    char firstName[50];

    // Prompt the user to enter their first name
    printf("Enter your first name: ");
    
    // Read the input and store it in the array
    scanf("%s", firstName);

    // Display the entered first name
    printf("Your first name is: %s\n", firstName);

    return 0;
}

