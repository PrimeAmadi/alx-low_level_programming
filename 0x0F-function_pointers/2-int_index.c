/**
 * int_index - a function that searches for an integer
 * @size:  the number of elements in the array @array
 * @array: array to search
 * @cmp: function to compare  element to some base
 * Return: index of the found element, -1 if no match
 * or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for(;i < size;i++)
		if((*cmp)(array[i]) != 0)
			return (i);

	return (-1);
}
