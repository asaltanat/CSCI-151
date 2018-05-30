/*
#include <stdio.h>
#include <math.h>

int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
    int n, m, mxi, mxj, mx=0;//, cr = 0;
    printf("Enter the number of rows:");
    scanf ("%i", &n);
    printf("Enter the number of column:");
    scanf("%i", &m);
    printf("ENter the matrix:\n");
	int a[n][m], i, j;

	for(i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			// a[i][j] = ++cr;
			scanf("%i", &a[i][j]);
			if(a[i][j]>mx)
			{
				mx = a[i][j];
				mxi = i;
				mxj = j;
			}
		}
	}
	printf("The maximum value is %i\n and it is in the  %i row\n %i  column", mx, mxi, mxj);
	return 0;
}
*/
#include <stdio.h>
int main ()
{
	int i;
	for(i='a'; i<='e'; ++i)
	{
		putchar(i);
	}
	return 0;
}
