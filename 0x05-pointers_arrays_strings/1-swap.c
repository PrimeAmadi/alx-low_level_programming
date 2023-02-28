#include "main.h"

/**
 * swap_int - swap the
 *  values of the int @a
 *  and @b
 * @a : first arg
 * @b : second arg
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*a = temp;
}
