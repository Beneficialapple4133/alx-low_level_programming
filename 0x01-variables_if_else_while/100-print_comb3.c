#include <stdio.h>

/**
 * main-all combinations of 2 digits
 * Return: 0 success
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			int number = i * 10 + n;

			if (number >= 1 && number < 90)
			{
			putchar('0' + i);
			putchar('0' + n);
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
