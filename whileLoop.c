#include <stdio.h>
#include <math.h>
//Task A
/*
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);

	int a = 1, b = 0, c = 0, i=1;

	while(i<=20)
	{
		printf("%i\n", a+b);
		c = a;
		a = b;
		b = c+a;
		i++;
	}
	return 0;
}
*/

//Task B
/*
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int n, x=1, k = 0;
	scanf("%i", &n);
	while(x*2<=n)
	{
		x*=2;
		k++;
	}
	printf("%i", k);
	return 0;
}
*/
// Task C
/*
int main ()
{
	double i = 0, j = 0;
	for(i = 0; i<=360; i+=10)
	{
		for(j = 0; j<=sin(i*3.14/180); j+=0.1)
			printf("*");
		for(j=0; j>sin(i*3.14/180); j-=0.1)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/
