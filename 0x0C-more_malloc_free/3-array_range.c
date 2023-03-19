#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * the array created should contain all the values
 * from min (included) to max (included),
 * ordered from min to max
 * @min : the first and smallest int in the array
 * @max : the last and largest int in the array
 * Return: pointer to the newly formed array
 */

int *array_range(int min, int max)
{
	int *array;
	int len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	while (len)
	{
		len--;
		array[len] = min + len;
	}

	return (array);

}
