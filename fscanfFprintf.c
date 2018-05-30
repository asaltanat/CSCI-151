#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *in, *in2, *out;
	char name[100];
	in = fopen("values.txt", "r");
	in2 = fopen("story.txt", "r");
	printf("Enter the name of output file:");
	scanf("%s", name);
	out = fopen(name, "w");
	if(in == NULL || in2 == NULL || out==NULL)
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
			fprintf(out, "%s", s1);
			cr++;
			}
			else if(cr == 1)
			{
				fprintf(out, "%s", s2);
				cr++;
			}

			else if(cr == 2)
			{
				fprintf(out, "%s", s3);
				cr++;
			}

			else if(cr == 3)
			{
				fprintf(out, "%s", s4);
				cr++;
			}
		}
		else
			fprintf(out,"%c", S);

	}while(!feof(in2));

	fclose(in);
	fclose (in2);
	fclose(out);
	return 0;
}
