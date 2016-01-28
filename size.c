#include <stdio.h>

int main()
{
	printf("int - %d\n", sizeof(int));
	printf("signed int - %d\n", sizeof(signed int));
	printf("unsigned int - %d\n", sizeof(unsigned int));

	printf("short int - %d\n", sizeof(short int));
	printf("signed short int - %d\n", sizeof(signed short int));
	printf("unsigned short int - %d\n", sizeof(unsigned short int));

	printf("long int - %d\n", sizeof(long int));
	printf("signed long int - %d\n", sizeof(signed long int));
	printf("unsigned long int - %d\n", sizeof(unsigned long int));

	printf("float - %d\n", sizeof(float));
	printf("double - %d\n", sizeof(double));
	printf("long double - %d\n", sizeof(long double));

	printf("char - %d\n", sizeof(char));	
}
