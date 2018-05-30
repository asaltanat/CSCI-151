#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *inputf;
	FILE *outputf;
	char namein[100], nameout[100];
	printf("Name of the INPUT:");
	scanf("%63s", namein);
	printf("Name of the OUTPUT:");
	scanf("%63s", nameout);
	inputf = fopen(namein, "r");
	outputf = fopen(nameout, "w");

	if(inputf== NULL)
	{
		printf("WRONG1");
		return 1;
	}
	if(outputf == NULL)
	{
		printf("Wrong2");
		return 1;
	}
	printf("OPEN\n");
	char ch;
	do
	{
		fscanf(inputf, "%c", &ch);
		fprintf(outputf, "%c", ch);
//		printf("%c\n", ch);
	}while(!feof(inputf));

	fclose (inputf);
	fclose(outputf);
	return 0;
}


