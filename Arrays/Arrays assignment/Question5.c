#include <stdio.h>

int main() {
    // Declare an array to store salaries of 20 employees
    double salaries[20];

    // Read and store salaries for 20 employees
    printf("Enter the salary of 20 employees:\n");
    for (int i = 0; i < 20; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }

    // Display employee numbers and their salaries
    printf("\nEmployee No\tSalary\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\t\t%f\n", i + 1, salaries[i]);
    }

    return 0;
}

