#include <stdio.h>

// Task 1
/*
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int x;
	printf("Please enter an integer: ");
	scanf("%i",&x);
	while(x>0)
	{
		printf("The number squared is: %i\n", x*x);
		printf("Please enter an integer: ");
		scanf("%i",&x);
	}
	printf("Done");
	return 0;
}
*/
// Task 2
/*
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, k, x;
	scanf("%i", &x);
	while(x>0){
		k=0;
		scanf("%i", &n);
		printf("%i=", n);
		while(n>0)
		{
			printf("+(%i*8^%i)", n%8, k);
			k++;
			n/=8;
		}
		scanf("%i", &x);
	}
	printf("Done");
return 0;
}
*/
// Task 3
/*
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, k, x;
	scanf("%i", &x);
	while(x>0){
		k=0;
		scanf("%i", &n);
		printf("%i=", n);
		while(n>0)
		{
			printf("+(%i*16^%i)", n%16, k);
			k++;
			n/=16;
		}
		scanf("%i", &x);
	}
	printf("Done");
return 0;
}
*/

// Task 4
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, k = 0, x;
		scanf("%i %i", &n, &x);
		printf("%i=", n);
		while(n>0)
		{
			printf("+(%i*%i^%i)", n%x,x, k);
			k++;
			n/=x;
		}
	printf("Done");
return 0;
}
