
#include <stdio.h>
#include <math.h>

int main ()
{
	setvbuf(stdout , NULL, _IONBF, 0);
	double A, an;
	scanf ("%lf", &A);
	//printf("%f", A);
	an =(double) A - (pow(A, 3.00))/6 + (pow(A, 5.00)/120);//- (pow(A, 7.00))/5040;
   printf ("sin(%f) = %f",A, an);
	return 0;
}

