// 23-2533
// Induli Shane Paul 
// ACS 113A - Structured Programming Assignment
// ARRAYS
// Question 6

#include <stdio.h>

int main() {
    // Declare an array to store salaries of 20 employees
    double salaries[20];

    // Read and store salaries for 20 employees, and accumulate the total
    double totalSalary = 0;
    printf("Enter the salary of 20 employees:\n");
    for (int i = 0; i < 20; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
        totalSalary += salaries[i];
    }

    // Display the final total salary
    printf("\nTotal Salary: %f\n", totalSalary);

    return 0;
}

