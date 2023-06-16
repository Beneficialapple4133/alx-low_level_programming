#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - Start of the program
 *
 * Description: Generate random number
 *
 * return : 0, success and program terminates
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code starts here*/
	printf("%d is positive", n);
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
       	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}
	printf("\n");
	return (0);
}
