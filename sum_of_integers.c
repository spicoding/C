#include <stdio.h>

int main(){	
	// Specification of data types, in this case, declaring them as integers
	int number1, number2, sum;
	
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2 );
	
	// Computation of the sum
	sum = number1 + number2;
	
	printf("%d + %d = %d", number1, number2, sum);
	
	return 0;
	
}
