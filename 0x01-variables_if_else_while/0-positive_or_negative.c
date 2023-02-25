#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if  a random
 * number is + or -
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
