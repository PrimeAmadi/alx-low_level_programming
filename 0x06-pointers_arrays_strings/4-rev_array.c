#include "main.h"

/**
 * swap_int - swp the value of two
 * ints
 * @x: pointer to int 1
 * @y: pointer to int 2
 */

void swap_int(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * reverse_array - reverses the
 * content of an array
 * @a: pointer to the array
 * @n: number of element in the array
 */

void reverse_array(int *a, int n)
{
	int i;

	n--; /* compensate for zero starting point */

	for (i = 0; i < n; i++)
	{
		swap_int(a + i, a + n);
		n--;
	}
}
