#include "main.h"

/**
 * _memcpy - copies n bytes from
 * src to dest
 * @src: bytes to copy to @dest
 * @dest: where to copy bytes from @src
 * @n: number of bytes to copy
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

