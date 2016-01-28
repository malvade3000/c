#include <stdio.h>

int main()
{
	int a = 123456, b = 654321, sum;
	sum = a + b;
	
	printf("Sum is %hd\n", sum);	//This will be garbage value, Because this summetion (777777) cant't be stored in short int.  
}
