#include "main.h"

/**
 * _isupper - takes an integer and evaluatas
 * if it is the ASCII value of an upper case
 * letter
 * @c: the int value to evaluate
 * Return: 1 for true it is an uppercase letter,
 * and 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
