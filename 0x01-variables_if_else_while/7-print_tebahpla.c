#include <stdio.h>

/**
 *main-prints in reverse alphabets
 *Return: 0, success
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
