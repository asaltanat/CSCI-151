#include <stdio.h>
//Task A
/*
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);

	int ch= getchar();

	printf("%i", ch);

	return 0;
}
// Task B
*/
/*
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	char ch = getchar();
	while(ch !='\n')
	{
		int i = ch;
		if(ch>='a' && ch<='z')
		{
			i -=32;
		}
		putchar(i);
		ch=getchar();
	}

	return 0;
}
*/

// task C
int main ()
{
	setvbuf(stdout, NULL, 0, _IONBF);
	char ch = getchar();
	int k=0, mx = 0;
	while(ch != '\n')
	{
		if(ch == ' ')
		{
			printf("%i\n", k);
			if(k>mx)
			{
				mx = k;
			}
			k=0;
		}
		else
		k++;
		ch = getchar();
	}
	if(k != 0)
		printf("%i", k);
	printf("The maximum length is %i\n", mx);
	printf("Done.");
	return 0;
}
