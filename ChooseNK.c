/*
 * 18Task5.c N choose K
 *
 *  Created on: 29 окт. 2017 г.
 *      Author: Saltanat Aidarova
 */
#include <stdio.h>
long choose(int n, int k)
{
	if(k == 0)
		return 1;
	if(k == 1)
		return n;
	if(n == k)
		return 1;
	else
		return choose(n-1, k-1)*n/k;
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int n, k;
	scanf("%i %i", &n, &k);
	printf("%ld", choose(n,k));
	return 0;
}
