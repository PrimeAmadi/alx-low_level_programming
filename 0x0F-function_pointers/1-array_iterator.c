#include <stdlib.h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: array of element
 * @size: num of elements of the array
 * @action: function to act on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	
	if(!array || !action)
		return;

	while (i < size)
	{
		(*action)(array[i++]);
	}
}
