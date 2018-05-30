/*
 * 20B.c String Compare
 *
 *  Created on: 4 нояб. 2017 г.
 *      Author: Салтанат Айдарова
 */
#include <stdio.h>
_Bool areEqual(char str1[], char str2[])
{
	int i = 0;
	while((int)str1[i] !=0)
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
	if((int)str1[i] == 0 && (int)str2[i]!=0)
		return 0;
	return 1;
}
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	char s[111], t[111];
	scanf("%s", s);
	scanf("%s", t);
	if(areEqual(s, t))
	{
		printf("Equal");
	}
	else
		printf("Not Equal");

	return 0;
}
