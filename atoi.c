/*
 * 21A.c
 *
 *  Created on: 4 нояб. 2017 г.
 *      Author: Салтанат Айдарова
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    setvbuf(stdout, NULL, _IONBF, 0);
	FILE *IN;
	IN = fopen("input.txt", "r");
	int sum = 0;
	if(IN == NULL)
		{
			printf("WRONG");
			return 1;
		}
	while(!feof(IN))
	{
		char s[100];
		fscanf(IN, "%s", s);
		sum+=atoi(s);
	}
    fclose(IN);
	printf("%i", sum);

	return 0;
}

