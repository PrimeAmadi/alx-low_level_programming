#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	/* iterate over the string, printing every other character */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
