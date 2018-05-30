#include <stdio.h>
#include <math.h>

int main (void)
{
	setvbuf (stdout, NULL, _IONBF, 0);

	int a, b, c;
	double x1, x2, dlt;
	scanf("%i %i %i", &a, &b, &c);

	dlt = b*b-4*a*c;
	x1 = (double)(-b+sqrt(dlt))/2/a;
	x2 = (double)(-b-sqrt(dlt))/2/a;
	printf("%lf %lf", x1, x2);

	return 0;
}
