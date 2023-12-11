#include <stdio.h>

int main(void){
    int salary = 100;
    int total_salary = 0;
    int account_balance = 1000000;

    while (total_salary<account_balance)
    {
        /* code */
        printf("Your salary is: %d \n", salary);
        printf("Enter a slary above 1000000 to stop\n");
        printf("Enter your salary \n"); 
        scanf("%d", &salary);

        total_salary = total_salary + salary;

        printf("Total salary so far is %d \n", total_salary);



    }
    printf("End of Program##########################################");
    return 0;
}