#include "min.h"

/**
 * print_rev - print a string
 *  in reverse.
 * @s: str to be printed
 */

void print_rev(char *s)
{
	int idx = _strlen(s);

	idx--;
	while (idx >= 0)
	{
		_putchar(*(s + idx));
		idx++;
	}
}
