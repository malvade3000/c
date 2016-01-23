#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, s, area;
	a = 5;
	b = 4;
	c = 3;

	s = (a+b+c)/2;

	printf("%f\n", s);
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("%f\n", area);
}
