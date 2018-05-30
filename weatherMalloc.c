/*
 * 25B.c
 *
 *  Created on: 20 нояб. 2017 г.
 *      Author: Салтанат Айдарова
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double rain;
	double temp;
	double wind;
}weather;

double rainfall(weather *a)
{
	double tot =0;
	int i;
	for(i = 0; i<12; ++i)
	{
		tot+=(a+i)->rain;
	}
	return tot;
}
double lowtemp(weather *a)
{
	double mm=a->temp;
	int i;
	for(i = 1; i<12; ++i)
	{
		if(mm>(a+i)->temp)
			mm=(a+i)->temp;
	}
	return mm;
}
double avwind(weather *a)
{
	double tot =0;
	int i;
	for(i = 0; i<12; ++i)
	{
		tot+=(a+i)->wind;
	}
	return (double)tot/12;
}
void show(weather *a)
{
	printf("The weather in Astana for the 12 months:\n");
	int i;
	printf("Month Rain     Temp      Wind\n");
	for(i = 0; i<12; ++i)
	{
		printf("%i %5.3f %5.3f %5.3f\n", i, (a+i)->rain, (a+i)->temp, (a+i)->wind);
	}
}
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	weather *astana = (weather*) malloc (12*sizeof(weather));
	FILE *inp = fopen("astana.txt","r");
	if(inp == NULL)
	{
		printf("No file");
		return 1;
	}
	int i;
	double x, y, z;
	printf("OK");
	for(i=0; i<12; ++i){
		fscanf(inp,"%lf %lf %lf", &x, &y, &z);
		(astana+i)->rain = x;
		(astana+i)->temp = y;
		(astana+i)->wind = z;
	}
	printf("The total rainfall for the entire year: %f\n", rainfall((astana)));
    printf("The lowest average temperature: %f\n", lowtemp(astana));
	printf("The average of the wind speed: %f\n", avwind(astana));
	show(astana);

    fclose (inp);
		return 0;
}
