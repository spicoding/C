#include <stdio.h>

int main(){
	char c;
	int lowercase_vowel, uppercase_vowel;
	printf("Enter an alphabet: ");
	scanf("%c", &c);
	
	// evaluates to 1 if variable c is a lowercase vowel
	
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || );
	
	// evaluates to 1 if variable c is an uppercase vowel
	
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || );
	
	
	
	return 0;

}
