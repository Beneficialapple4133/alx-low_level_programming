#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* Main- Programme starts
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
	printf("The number %d ", n);
	if (n > 0) {
		printf("it's positive");
	} else if (n ==0) {
		printf("it's zero");
	} else {
		printf("it's a negative");
	}
	printf("\n");
	return (0);
}
