#include <stdio.h>
void transpose(int row, int col, double orig[row][col], double result[col][row])
{
	int i, j;
	for(i = 0; i<row; ++i)
	{
		for(j = 0; j<col; ++j)
		{
			result[i][j] = orig[j][i];
		}
	}
}
void Out(int row, int col,double  arr[][2])
{
	int i, j;
	for(i = 0; i<row; ++i)
	{
		for(j = 0; j<col; ++j)
				printf("%f ", arr[i][j]);
		printf("\n");
	}
		printf("\n");
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
    double a[][2] = {{11, 12},
    		          {13, 14}};
    double b[2][2];
    Out(2, 2, a);
    transpose(2, 2, a, b);
    Out(2, 2, b);
	return 0;
}
