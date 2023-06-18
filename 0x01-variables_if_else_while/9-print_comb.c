#include <stdio.h>

/**
 *main- all possible single digit combos
 *Return:0, success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			int k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				putchar(k + '0');

				if (i == 7 && j == 8 && k == 9)

					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
