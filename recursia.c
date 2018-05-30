/*
 * 18Task2.c Sum of Subarray
 *
 *  Created on: 29 окт. 2017 г.
 *      Author: Saltanat Aidarova
 */
#include <stdio.h>
int Sum(int from, int to, int a[])
{
	if(from == to)
		return a[from];
	else
		return Sum(from+1, to, a)+a[from];
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int i, n, a[1010], start, end;
	scanf("%i", &n);
	for(i = 0; i<n; ++i)
	{
		scanf("%i", &a[i]);
	}
	printf("ENter the Interval:");
	scanf("%i %i", &start, &end);
	printf("%i", Sum(start, end, a));
	return 0;
}

