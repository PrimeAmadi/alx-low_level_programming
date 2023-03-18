#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * of nmemb elements of size bytes each
 * @nmemb: number of element
 * @size: individual elememt byte size
 * Return: pointer to allocated memory,
 * If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t bytes = nmemb * size;
	char *mem;

	if (!bytes)
		return (NULL);

	mem = malloc(bytes);
	if (!mem)
		return (NULL);

	while (bytes > 0)
		mem[--bytes] = '\0';

	return (mem);
}

