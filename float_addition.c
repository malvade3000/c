#include <stdio.h>

int main()
{
	float a, b;
	int sum;
	
	printf("Enter the 2 decimal values to add : \n");
	scanf("%f %f", &a, &b);

	sum = a +b;

	printf("Sum is %d\n", sum);	// Result will get truncated.
}
