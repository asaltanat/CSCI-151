#include <stdio.h>
#include <math.h>

int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);

	int a[13][13], i, j;
	for(i = 0; i<=12; ++i)
	{
		for (j = 0; j<=12; ++j)
		{
			a[i][j] = i*j;
		}
	}
	for(i = 0; i<=12; ++i)
		{
			for (j = 0; j<=12; ++j)
			{
				printf("%3i ", a[i][j]);
			}
			printf("\n");
		}
	return 0;
}
