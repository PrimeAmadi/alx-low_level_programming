#include "main.h"

/**
 * print_line - print line on
 * the console
 * @n: the length of the line
 * in '_'
 */

void print_line(int n)
{
	if (n > 0)
		while (n--)
		{
			putchar('_');
		}
	putchar('\n');
}
