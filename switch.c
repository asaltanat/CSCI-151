#include <stdio.h>
/*
int main ()
{
	//Task A
	setvbuf(stdout, NULL, _IONBF, 0);
	int G;
	scanf("%i", &G);
	if(G>=95)
		printf("A");
	else if(G>=90)
			printf("A-");
	else if(G>=85)
		printf("B+");
	else if(G>=80)
		printf("B");
	else if(G>=75)
		printf("B-");
	else if(G>=70)
		printf("C+");
	else if(G>=65)
		printf("C");
	else if(G>=60)
		printf("C-");
	else if(G>=55)
		printf("D+");
	else if(G>=50)
		printf("D");
	else
		printf("F");
	return 0;
}
*/
/*
int main ()
{
	//Task2
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, i=2;
	scanf("%i", &n);
	while(i<n)
	{
		if(n%i==0)
			printf("%i ", i);
		i++;
	}
	return 0;
}
*/
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int n;
	scanf("%i", &n);
	if(n>0 && n<367){
	switch (n%7)
	{
	case 1:
		printf("It is Friday,");
		break;
	case 2:
		printf("It is Saturday,");
		break;
	case 3:
		printf("It is Sunday,");
		break;
	case 4:
		printf("It is Monday,");
		break;
	case 5:
		printf("It is Tuesday,");
		break;
	case 6:
		printf("It is Wednesday,");
		break;
	case 0:
		printf("It is Thursday,");
		break;
	default :
		printf ("ERROR");
		break;
	}
	if(n<=31)
		printf("January %i", n);
	else if(n<=60)
		printf("February %i", n-31);
	else if(n<=91)
			printf("March %i", n-60);
	else if(n<=121)
				printf("April %i", n-91);
	else if(n<=152)
				printf("May %i", n-121);
	else if(n<=182)
				printf("June %i", n-152);
	else if(n<=213)
				printf("July %i", n-182);
	else if(n<=244)
				printf("August %i", n-213);
	else if(n<=274)
				printf("September %i", n-244);
	else if(n<=305)
				printf("October %i", n-274);
	else if(n<=335)
				printf("November %i", n-305);
	else
				printf("December %i", n-335);

	}
	else
		printf("ERROR");
	return 0;
}
