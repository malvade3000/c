#include <stdio.h>

int main()
{
	float deci1, deci2, division; 

	printf("Enter the 2 numbers you want to divide : \n");
	scanf("%f %f", &deci1, &deci2);
	
	division = deci1 / deci2;

	printf("Division is : %f\n", division);
}
