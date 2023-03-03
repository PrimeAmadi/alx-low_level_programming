#include "main.h"

/**
 * _strncpy - copiez n bytes of src string
 * to dest.
 *
 * @dest: writable mem to copy to
 * @src: string to copy to dest
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c]; c++)
		dest[c] = src[c];

	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
