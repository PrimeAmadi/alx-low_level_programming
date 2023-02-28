#include "main.h"

/**
 * _puts - prints str
 *  followed by newline
 *  @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
