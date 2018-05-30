#include <stdio.h>
int Min(int size, double arr[])
{
	int i, mn = 0;
	for(i = 1; i<size; ++i)
	{
		if(arr[mn]>arr[i])
			mn = i;
	}
	return mn;
}
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);
    int n, i;
    double a[10010];
    scanf("%i", &n);
    for(i = 0; i<n; ++i)
    	scanf("%lf", &a[i]);
    printf("%i", Min(n, a));
	return 0;
}
