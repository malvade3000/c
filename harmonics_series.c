#include <stdio.h>

int main()
{
	int number;
	float sum = 0, count = 1;
	
	printf("Enter a number\n");
	scanf("%d", &number);
	
	while(count <= number)
	{
		sum = sum + (1/count);
		count = count + 1;
	}

	printf ("Sum is : %f\n", sum );
}
