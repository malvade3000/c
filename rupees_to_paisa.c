#include <stdio.h>

int main()
{
	float rupees;
	int paisa;
	printf("Enter the amount in rupees you want to covert into paisa : ");
	
	scanf("%f", &rupees);

	paisa = rupees * 100;

	printf("%d : Paisa\n", paisa);
}
