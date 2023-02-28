#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i;

	/* find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* print the characters of the string in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

