#include <stdio.h>
/**
 * main - Program entry
 *
 * Description - This program prints the size
 * of various types on the computer
 * it is compiled and run on.
 *
 * Return: Always 0 hence a successful execution
 */
int main()
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int : %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
