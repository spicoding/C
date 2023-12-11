#include <stdio.h>

int main(){
	int num1;
	float value1;
	char c = 'M';
	char name[5];
	
	
	printf("What is your name?:");
	scanf("%s", &name);
	
	printf("Hello, %s \n", name);
	
	printf("What is your age?\n:");
	scanf("%d", &num1);
	
	printf("Uko na how much? \n:");
	scanf("%f", &value1);	

	
	printf("You are %d years old \n", num1);
	printf("you are %c \n", c);
	printf("You have %2f shillings in the bank",value1);
	
	
	
	return 0;
	
}
