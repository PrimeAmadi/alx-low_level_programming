#include "main.h"
#include <stdlib.h>

/**
 *  _strlen - finds the length of a string.
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

/**
 * _memncpy - Copy n bytes from src to dest
 * @dest: Pointer to destination buffer
 * @src: Pointer to source buffer
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_memncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}



/**
 * string_nconcat - concat s1
 * with n bytes of s2, stores result
 * in a memory block in heap
 * @s1 : first string
 * @s2 : second string
 * @n : num of bytes to cat
 * from @s2
 * Return: memory block
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int s1len;
	unsigned int s2len;
	unsigned int bytes;
	char *result;

	s1 = (!s1) ? "" : s1;
	s2 = (!s2) ? "" : s2;

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	n = (s2len < n) ? s2len : n;
	bytes = s1len + n + 1;

	result = malloc(bytes);
	if (!result)
		return (NULL);

	_memncpy(result, s1, s1len);
	_memncpy(result + s1len, s2, s2len);

	return (result);
}



