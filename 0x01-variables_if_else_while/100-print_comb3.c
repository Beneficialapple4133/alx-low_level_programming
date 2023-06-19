#include <stdio.h>

/**
 * main-all combinations of 2 digits
 * Return: 0 success
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (i = n + 1; n < 10; n++)
		{
			putchar('0' + i);
			putchar('0' + n);

			if (i != 8 || n != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
