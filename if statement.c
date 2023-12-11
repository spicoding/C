#include <stdio.h>

int main(){
	int width, length, area = 0;
	
	printf("Please enter the length and the width of your plot: ");
	scanf("%d %d", &length, &width);
	
	area = length * width;
	
	printf("For length: %d, and width: %d, Area is: %d square metres.\n", length, width, area);
	
	if(area >= 100)
	printf("Your land size is large")	;
	else
	printf("Your land size is OK");
	
	
	
	return 0;
}
