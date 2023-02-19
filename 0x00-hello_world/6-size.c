/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", (long int)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (long int)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (long int)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n",
		(long int)sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", (long int)sizeof(float));
	return (0);
}
