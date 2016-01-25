#include <stdio.h>

int main()
{
	int number_1, number_2, number_3;
	float average;

	printf("Enter 3 numbers : ");

	scanf("%d %d %d", &number_1, &number_2, &number_3);
	average = (number_1 + number_2 + number_3)/3.0;
	printf("Average is : %f\n", average);
}
