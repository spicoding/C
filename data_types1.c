#include <stdio.h>

int main(){
	int num1=60;
	int num2=40;
	
	printf("Pleae enter your two numbers");
	scanf("%d %d", &num1, &num2);
	
	int total = num1 + num2;
	
	printf("The total of %d and %d is %d", num1, num2, total);
	
	return 0;
};
