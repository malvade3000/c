#include <stdio.h> 

int main()
{
	int number, count = 1, sum = 0, value;
	float average;
	printf("How many numbers do you want to enter : " );
	scanf("%d", &number);
	while(count <= number)
	{
		printf("Enter number : ");
		scanf("%d", &value);
		sum = sum + value;
		count = count + 1;
		
			
	}
	
	printf("Sum is : %d\n", sum);

	average = sum/(number * 1.0);
	printf("Average is : %f\n", average);

}
