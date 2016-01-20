#include <stdio.h>

int main()
{
	int number = 7, value, count = 0;
	while(count < 10)
	{
		
		count = count + 1;
		value = number * count;
		
		printf("%d %d\n", count, value);
	}
				 
}
