#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name
 * of this source file
 * Return: 0 always
 */

int main(void)
{
	char *s = __FILE__;

	while (*s)
		putchar(*s++);
	putchar('\n');
	return (0);
}
