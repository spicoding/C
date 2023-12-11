#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array to store the first name (assuming a reasonable maximum length)
    char firstName[50];

    // Prompt the user to enter their first name
    printf("Enter your first name: ");
    
    // Read the input and store it in the array
    scanf("%s", firstName);

    // Display the entered first name
    printf("Your first name is: %s\n", firstName);

    // Display the length of the first name using strlen()
    printf("Length of your first name: %zu\n", strlen(firstName));

    return 0;
}

