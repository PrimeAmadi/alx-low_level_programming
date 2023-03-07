#include "main.h"

/**
 * _memset - fill mem s with n number of b
 * @s: mem to fill
 * @b: char to fill with
 * @n: number of char to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
