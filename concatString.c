/*
 * 20D.c Concatenate
 *
 *  Created on: 4 нояб. 2017 г.
 *      Author: Салтанат Айдарова
 */

#include <stdio.h>

void concat(char str1[], char str2[], char resultStr[])
{
	int i = 0, j = 0;
	while((int)str1[i]!=0)
	{
		resultStr[i] = str1[i];
		i++;
	}
	while((int)str2[j]!=0)
	{
		resultStr[i] = str2[j];
		j++;
		i++;
	}
	resultStr[i] = (char)0;
}
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	char s[1010], t[1010], v[1001];
	scanf("%s %s", s, t);
    concat(s, t, v);
	printf("%s", v);
	return 0;
}

