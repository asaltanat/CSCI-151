#include <stdio.h>

typedef struct{
	int ID;
	char type;
	int balance;
} BankCustomer;

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *file;
	file = fopen("file.txt", "r");
	if(file == NULL)
	{
		printf("Wrong");
		return 1;
	}
	BankCustomer person[10];
	int i, sc=0, cc=0, dc=0, sav=0, cav=0, dav=0;
	for(i = 0; i<10; ++i)
	{
		fscanf(file, "%i %c %i", &person[i].ID, &person[i].type, &person[i].balance);
		if(person[i].type == 's')
		{
			sav+=person[i].balance;
			sc++;
		}
		else if(person[i].type == 'c')
		{
			cav+=person[i].balance;
			cc++;
		}
		else
		{
			dav+=person[i].balance;
			dc++;
		}
	}
	printf("The average balance for all checking accounts %f\n", (double)cav/cc);
	printf("The average balance for all savings accounts %f\n", (double)sav/sc);
	printf("The average balance for all deposit accounts %f\n", (double)dav/dc);

	fclose(file);
		return 0;
}
