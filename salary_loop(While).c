#include <stdio.h>

int main(){

    int salary = 100;

    while (salary <1000)

    {
        /* code */
        printf("Your salary is %d", salary);

        printf("TO STOP, ENTER A SALARY ABOVE 1000");

        printf("Enter your salary: \n");
        scanf("%d", &salary);

    

    }
    
    return 0;
}
