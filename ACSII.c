#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void)
{
	/*printf ("****   **   *     *****   **\n");
    printf ("*     *  *  *       *    *  *\n");
    printf ("****  ****  *       *    ****\n");
    printf ("   *  *  *  *       *    *  *\n");
    printf ("*  *  *  *  *****   *    *  *\n");*/
    double i;
    for(i = 0; i<=90; i++)
    {
    	printf("%lf\n", 3.03*3.03*sin(i*3.14/90)/9.81);
    }
	return 0;
}
