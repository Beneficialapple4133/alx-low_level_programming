#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 *main - Entry point 
 *
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code starts here*/
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}	printf("\n");
	return (0);
}
