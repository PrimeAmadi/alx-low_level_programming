#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s : pointer address to the string to be
 * evaluated
 * Return: int (length of the string)
 */

int _strlen(char *s)
{
	int len = 0;

	if (!(s || *s))
		return (0);

	while (s[len++])
		;

	return (--len);
}
