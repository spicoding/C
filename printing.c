#include <stdio.h>

int main(){
	int hours;
	int rateofpay;
	int salary;
	
	
	printf("Please enter the hours worked: ");
	scanf("%d", &hours);
	
	printf("Please enter the hourly rate of pay: ");
	scanf("%d", &rateofpay);
	
	printf("Hours worked is %d ", hours);
	printf("Rate of pay is %d ", rateofpay);
	
	salary = hours * rateofpay;
	printf("Your total salary is %d * %d = %d", hours, rateofpay, salary);
	
	
	
	
	
	return 0;	
}
