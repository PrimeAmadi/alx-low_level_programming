#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b : number of bytes to allocate
 * Return: a pointer to the allocated memory.
 * exit with status value if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *memptr;

	memptr = malloc(sizeof(char) * b);

	if (!memptr)
		exit(98);

	return (memptr);
}
