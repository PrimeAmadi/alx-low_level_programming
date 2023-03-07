#include "main.h"

/**
 * fill mem s with b
 * @s: mem to fill
 * @b: char to fill with
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
