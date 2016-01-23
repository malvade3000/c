#include <math.h>
#include <stdio.h>
int main()
{
	float x1, x2, y1, y2, d;
	x1 = 0, y1 = 3;
	x2 = 4, y2 = 0;

	d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	
	printf("Distance between (%f,%f) and (%f, %f) = %f\n", x1, y1, x2, y2, d);
}

//pow(a, 2)
