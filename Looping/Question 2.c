// 23-2533
// Induli Shane Paul 
// ACS 113A - Structured Programming Assignment
// Loops
// Question 2

#include <stdio.h>

int main() {
    float monthlySalary, yearlySalary;
    
    // Keep asking for monthly salary until yearly salary is more than 1000000
    do {
        // Input monthly salary
        printf("Enter the monthly salary: $");
        scanf("%f", &monthlySalary);

        // Calculate yearly salary
        yearlySalary = 12 * monthlySalary;

        // Display monthly and yearly salary
        printf("\nMonthly Salary: $%.2f\n", monthlySalary);
        printf("Yearly Salary: $%.2f\n\n", yearlySalary);

    } while (yearlySalary <= 1000000);

    // Display message when yearly salary is too high
    printf("Yearly salary is too high.\n");

    return 0;
}

