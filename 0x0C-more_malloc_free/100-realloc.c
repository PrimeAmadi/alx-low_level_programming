#include "main.h"
#include <stdlib.h>

/**
 * _realloc - that reallocates a memory block using malloc and free
 * @ptr : where ptr is a pointer to the memory
 * previously allocated with a call to malloc: malloc(old_size)
 * @old_size : the size, in bytes, of the allocated space for ptr
 * @new_size : the new size, in bytes of the new memory block
 * Return: ptr otherwise NULL if failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int count = new_size;
	char *buffer;
	char *ptrchar = ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		count = old_size;

	buffer = malloc(new_size);

	while (count)
	{
		count--;
		buffer[count] = ptrchar[count];
	}

	free(ptr);
	return (buffer);
}
