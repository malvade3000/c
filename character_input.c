#include <stdio.h>

int main()
{
	char character;

	printf("Enter a character: ");
	scanf("%c", &character);
	printf("You entered '%c' character and its ASCII value is %d\n", character, character);
}
