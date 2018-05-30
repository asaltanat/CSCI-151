#include <stdio.h>
void Reverse(int len, double arr[])
{
	int i;
	double b[len];
	for(i = 0; i<len; ++i)
	{
		b[i] = arr[len-1-i];
	}
	for(i = 0; i<len; ++i)
	{
		arr[i] = b[i];
	}
}
void Out(int len,double  arr[])
{
	int i;
	for(i = 0; i<len; ++i)
		printf("%f ", arr[i]);
	printf("\n");
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
    double a[] = {11, 12, 13, 14, 15, 16, 17};
    Out(7, a);
    Reverse(7, a);
    Out(7, a);
	return 0;
}
