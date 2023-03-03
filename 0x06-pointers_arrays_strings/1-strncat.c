#include "main.h"

/**
 * _strncat - concatenate  n char of src to the
 *  the end of dest string and return
 *  the resultant string (which is dest).
 *
 * @src: string to be concatinated to back dest
 * @dest: string to be concatenated to
 * @n: the number of char from srcs to be cat to
 * dest
 *
 * Return: @dest pointer to the updated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned long d = 0;
	unsigned long s = 0;

	if (dest == NULL)
		return (NULL);
	if (src == NULL || (n < 0))
		return (dest);

	while (dest[d])
		d++;
/*
 * d is now the number of element in
 * the strng including '\0' terminator.
 * counting from zero
 */

	while (src[s] && (n > 0))
	{
		dest[d + s] = src[s];
		s++;
		n--;
	}
	dest[d + s] = '\0';

	return (dest);
}
