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
int main(voidi)
{
	fprintf(stdout, "Size of char: %zu byte(s)\n", sizeof(char));
	fprintf(stdout, "Size of int : %zu byte(s)\n", sizeof(int));
	fprintf(stdout, "Size of long int: %zu byte(s)\n", sizeof(long int));
	fprintf(stdout, "Size of long long int: %zu byte(s)\n", sizeof(long long int));
	fprintf(stdout, "Size of float: %zu byte(s)\n", sizeof(float));
	fprintf(stderr,"Error: Failed to retreive size of types.\n");
	return (0);
}
