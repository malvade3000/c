#include <stdio.h>

#define PI 3.14

int main()
{
	float radius, area;
	radius = 5;

	area = PI*radius*radius;

	printf("Area of the circle with radius %f is %f\n", radius, area);
}
