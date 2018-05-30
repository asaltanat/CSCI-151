/*
 * 18Task3.c Min of Subarrays
 *
 *  Created on: 29 окт. 2017 г.
 *      Author: Салтанат Айдарова
 */
#include <stdio.h>
double minValue(double arr[ ], int from, int to)
{
	if(from == to)
		return arr[from];
	else
	{
		 double ans = minValue(arr, from+1, to);
		 if(ans>arr[from])
			 return arr[from];
		 else
			 return ans;
	}
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int i, n, start, end;
	double a[1010];
	scanf("%i", &n);
	for(i = 0; i<n; ++i)
	{
		scanf("%lf", &a[i]);
	}
	printf("ENter the Interval:");
	scanf("%i %i", &start, &end);
	printf("%f", minValue(a, start, end));
	return 0;
}

