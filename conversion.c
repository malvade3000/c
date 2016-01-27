#include <stdio.h>

int main()
{
	char character, uppercase;
	
	printf("Enter a lower case character\n");
	scanf("%c", &character);
	
	uppercase = character - 32;

	printf("You enterd '%c' And its uppercase value is '%c'\n", character, uppercase);
}
