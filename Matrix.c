#include <stdio.h>
#include <math.h>

int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int a[3][3], cr= 0, b[3][3] , i, j,  tr=3, k = 0;
    int c[3][3] =
    {{0,0,0},
    {0,0,0},
	{0,0, 0}};
	for(i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			a[i][j] = ++cr;
			b[i][j] = tr;
			tr+=2;
		}
	}
	for(i = 0; i<3; i++)
		{
			for (j = 0; j<3; j++)
			{
				printf ("%i ", a[i][j]);
			}
			printf("            ");
			for (j = 0; j<3; j++)
			{
							printf ("%i ", b[i][j]);
			}
			printf("\n");
		}
	for(i = 0; i<3; i++)
		{
			for (j = 0; j<3; j++)
			{
				int cr = 0;
				for(k = 0; k<3; ++k)
				{
	            cr+=a[i][k]*b[k][j];
				}
				c[i][j] = cr;
			}
		}

	for(i = 0; i<3; i++)
		{
			for (j = 0; j<3; j++)
			{
	     printf ("%i ", c[i][j]);
			}
			printf("\n");
		}
	return 0;
}
