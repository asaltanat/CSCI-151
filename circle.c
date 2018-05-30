#include <stdio.h>

int main (void)
{
	double r, a, c;
	setvbuf (stdout, NULL, _IONBF, 0);

	scanf("%lf", &r);
	// Calculating the surface area
	a = 3.14*r*r;
	// Calculating the circumference
	c = 3.14*2*r;
	printf ("The circumference is %f \n The area of a circle is %f", c, a);
	return 0;
}
