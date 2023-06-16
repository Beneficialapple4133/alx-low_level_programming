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
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int : %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	
	return (0);
}