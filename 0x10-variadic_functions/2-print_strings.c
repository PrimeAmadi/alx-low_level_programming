#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings in
 * in @... followed by a new line
 * NULL pointer to string is printed as "nil"
 * @separator: separates the printed arguments
 * @n: number of passed arguments
 * @...: @n number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *s;

	va_start(strs, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i + 1 < n)
		printf("%s", separator);
	}
	putchar('\n');
	va_end(strs);
}

