#include <stdio.h>
/**
 *main- Define a string of single numbers
 *Return: 0, success
 *
 **/

int main(void)
{
	const char *numbers = "0123456789";

	for (int i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
		putchar('\n');
	}

	return (0);
}
