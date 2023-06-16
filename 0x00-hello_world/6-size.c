#include <stdio.h>
/**
 * main - Program entry
 *
 * Description - This program prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 hence a successful execution
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int : %lu byte(s)\n", sizeof(int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of long: %lu byte(s)\n", sizeof(long));
	printf("Size of long double: %lu byte(s)\n", sizeof(long double));
	printf("Size of long long: %lu byte (s)\n", sizeof(long long));
	printf("Size of short: %lu byte(s)\n", sizeof(short));
	return (0);
}
