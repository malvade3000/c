#include <stdio.h>

#define PRINCIPAL 5000
#define RATE 0.11
#define PERIOD 10

int main()
{
	int year = 0;
	float ammount = PRINCIPAL;
	float interest;
	

	while(year <= PERIOD)
	{
		printf("%d, %f\n", year, ammount);

		year = year + 1;
		interest = ammount * RATE;
		ammount = ammount + interest;

	}
			
}
