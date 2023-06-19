#include <stdio.h>

/**
 * main-all combinations of 2 digits
 * Return: 0 success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
