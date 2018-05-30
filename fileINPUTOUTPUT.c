#include <stdio.h>
#include <string.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *in, *in2;
	in = fopen("values.txt", "r");
	in2 = fopen("story.txt", "r");

	if(in == NULL || in2 == NULL)
	{
		printf("WRONG");
		return 1;
	}
	int cr = 0;
    char s1[100], s2[100], s3[100], s4[100], S;
	printf("Let's continue\n");
		fscanf(in, "%s %s %s %s", s1, s2, s3, s4);

	do
	{
		fscanf(in2, "%c", &S);
		if(S == '$')
		{
			if(cr == 0){
			printf("%s", s1);
			cr++;
			}
			else if(cr == 1)
			{
				printf("%s", s2);
				cr++;
			}

			else if(cr == 2)
			{
				printf("%s", s3);
				cr++;
			}

			else if(cr == 3)
			{
				printf("%s", s4);
				cr++;
			}
		}
		else
			printf("%c", S);

	}while(!feof(in2));

	fclose(in);
	fclose (in2);
	return 0;
}
